# PHP LXD Client 

Delivered as a C extension!

 - See INSTALL.md on how to install.
 - See https://lxc-systems.github.io/lxd/ for API docs.


 ## Connection

    $lxd = (new \Lxd\Client([
        'certificate_path' => '.certificates',
        'timeout' => 30
    ]))->connect('https://127.0.0.1:8443', 'lxd.server.secret');

    // or by global function
    $lxd = lxd_connect('https://127.0.0.1:8443', 'lxd.server.secret');


 ## Host

    $lxd->info();

    $lxd->resources();


 ## Certificates

    $lxd->certificates->all();

    $lxd->certificates->info('certificate-fingerprint');

    $lxd->certificates->remove('certificate-fingerprint');

    $lxd->certificates->add(
        'certificates/127.0.0.1/cert.crt',
	   'lxd.server.secret',
	   'My Client Certificate'
    );


 ## Containers

 **Container**
 
    $lxd->containers->all();

    $lxd->containers->info('container-name');

    $lxd->containers->state('container-name');

    $lxd->containers->setState('container-name', 'start', 30, true, true, true);

    $lxd->containers->start('container-name', 30, true, true, true);

    $lxd->containers->stop('container-name', 30, true, true, true);

    $lxd->containers->shutdown('container-name', 30, true, true, true);

    $lxd->containers->restart('container-name', 30, true, true, true);

    $lxd->containers->reboot('container-name', 30, true, true, true);

    $lxd->containers->freeze('container-name', 30, true, true, true);

    $lxd->containers->pause('container-name', 30, true, true, true);

    $lxd->containers->unfreeze('container-name', 30, true, true, true);

    $lxd->containers->thaw('container-name', 30, true, true, true);


    // Create container from image specified by alias
    $lxd->containers->create(
        "test",
        [
            "alias" => "ubuntu/xenial/amd64",
        ]
    );

    // Create container from image specified by fingerprint
    $lxd->containers->create(
        "test",
        [
            "fingerprint" => "097e75d6f7419d3a5e204d8125582f2d7bdd4ee4c35bd324513321c645f0c415",
        ]
    );

    // Create container based on most recent match of image properties
    $lxd->containers->create(
        "test",
        [
            "properties" => [
                "os"           => "ubuntu",
                "release"      => "14.04",
                "architecture" => "x86_64",
            ],
        ]
    );

    // Create an empty container
    $lxd->containers->create(
        "test",
        [
            "empty" => true,
        ]
    );

    // Create container with custom configuration.
    // - Set the MAC address of the container's eth0 device
    $lxd->containers->create(
        "test",
        [
            "alias"  => "ubuntu/xenial/amd64",
            "config" => [
                "volatile.eth0.hwaddr" => "aa:bb:cc:dd:ee:ff",
            ],
        ]
    );

    // Create container and apply profiles to it
    $lxd->containers->create(
        "test",
        [
            "alias"  => "ubuntu/xenial/amd64",
            "profiles" => ["migratable", "unconfined"],
        ]
    );

    // Create container from a publicly-accessible remote image
    $lxd->containers->create(
        "test",
        [
            "server" => "https://images.linuxcontainers.org:8443",
            "alias"  => "ubuntu/xenial/amd64",
        ]
    );

    // Create container from a private remote image (authenticated by a secret)
    $lxd->containers->create(
        "test",
        [
            "server" => "https://private.example.com:8443",
            "alias" => "ubuntu/xenial/amd64",
            "secret" => "my_secrect",
        ]
    );

    // Copy container
    $lxd->containers->copy('existing', 'new');

    // Copy container and apply profiles to it
    $lxd->containers->copy(
        'container-name',
        'copy-container-name',
        'profiles' => ['default', 'public']
    );

    // Change container to be ephemeral
    $container = $lxd->containers->info('container-name');
    $container['metadata']['ephemeral'] = true;
    $lxd->containers->replace('container-name', $$container['metadata']);

 **Files**

    $lxd->containers->files->read('container-name', '/path/to/file');

    $lxd->containers->files->write('container-name', '/path/to/file', 'File Contents', 0644, 0, 0);

    $lxd->containers->files->delete('container-name', '/path/to/file');


 **Logs**

    $lxd->containers->logs->all('container-name');

    $lxd->containers->logs->read('container-name', 'log.name.log');

    $lxd->containers->logs->remove('container-name', 'log.name.log'); // alias for delete

    $lxd->containers->logs->delete('container-name', 'log.name.log');


 **Snapshots**

    $lxd->containers->snapshots->all('container-name');

    $lxd->containers->snapshots->create('container-name', 'snapshot-name');

    $lxd->containers->snapshots->restore('container-name', 'snapshot-name');

    $lxd->containers->snapshots->rename('container-name', 'snapshot-name', 'new-snapshot-name');

    $lxd->containers->snapshots->remove('container-name', 'snapshot-name');


 ## Images

    $lxd->images->all();

    $lxd->images->all("https://images.linuxcontainers.org:8443/1.0/images");

    $lxd->images->info(null, "images-fingerprint", "secret");

    $lxd->images->info("https://uk.images.linuxcontainers.org:8443/1.0/images", "images-fingerprint"));

    $lxd->images->createFromRemote(
        "https://images.linuxcontainers.org:8443",
        [
            "alias" => "ubuntu/xenial/amd64",
        ]
    );

    $lxd->images->createFromRemote(
        "https://images.linuxcontainers.org:8443",
        [
            "fingerprint" => "b0f4faff46c9cb02db10984e2cf71c62fd539a9ab680d6fd54955671f3186087",
        ]
    );     

    $lxd->images->createFromRemote(
        "https://images.linuxcontainers.org:8443",
        [
            "fingerprint" => "b0f4faff46c9cb02db10984e2cf71c62fd539a9ab680d6fd54955671f3186087",
        ],
        true,
        true
    );

    $lxd->images->createFromContainer('container-name');

    $lxd->images->createFromContainer(
        'container-name',
        [
            'public' => true
        ]
    );     

    $lxd->images->createFromContainer(
        'container-name',
        [
            'filename'   => 'ubuntu-trusty.tar.gz',
            'properties' => ['os' => 'Ubuntu'],
        ]
    );

    $lxd->images->createFromSnapshot("container_name", "snapshot_name");

    $lxd->images->createFromSnapshot(
        "container_name",
        "snapshot_name",
        [
            "public" => true
        ]
    );

    $lxd->images->createFromSnapshot(
        "container-name",
        "snapshot-name",
        [
            "filename"   => "ubuntu-trusty.tar.gz",
            "properties" => ["os" => "Ubuntu"]
        ]
    );

    $image = $lxd->images->info(null, 'b0f4faff46c9cb02db10984e2cf71c62fd539a9ab680d6fd54955671f3186087');
    $image['metadata']['public'] = true;
    $lxd->images->replace('container-name', $image['metadata']);

    $lxd->images->remove('b0f4faff46c9cb02db10984e2cf71c62fd539a9ab680d6fd54955671f3186087', true);


 ## Networks

    $lxd->networks->all();

    $lxd->networks->info('network-name');

    $lxd->networks->create('network-name', 'My Network', [
        'ipv4.address' => '192.168.1.1/8',
        'ipv4.nat' => 'true',
        'ipv6.address' => '2001:470:b368:4242::1/64',
        'ipv6.nat' => 'true'
    ], 'bridge', true);

    $lxd->networks->replace('network-name', 'My Updated Network', [
        'bridge.driver' => 'openvswitch',
        'ipv4.address' => '192.168.1.2/8',
        'ipv4.nat' => 'true',
        'ipv6.address' => 'none'
    ], 'bridge', true);

    $lxd->networks->update('network-name', 'My Updated Network', [
        'dns.mode' => 'dynamic'
    ], 'bridge', true));

    $lxd->networks->remove('network-name');


 ## Operations

     $lxd->operations->all();

     $lxd->operations->info('operation-uuid');

     $lxd->operations->cancel('operation-uuid');

     $lxd->operations->wait('operation-uuid' , 30);


 ## Profiles

    $lxd->profiles->all();

    $lxd->profiles->info('profile-name');

    $lxd->profiles->create(
        'profile-name',
        'My new profile',
        ["limits.memory" => "1GB"],
        [
            "kvm" => [
                "type" => "unix-char",
                "path" => "/dev/kvm"
            ],
        ]
    );

    $lxd->profiles->update(
        'profile-name',
        'My new profile',
        ["limits.memory" => "1GB"],
        [
            "kvm" => [
                "type" => "unix-char",
                "path" => "/dev/kvm"
            ],
        ]
    );

    $lxd->profiles->replace(
        'profile-name',
        'My new profile',
        ["limits.memory" => "1GB"],
        [
            "kvm" => [
                "type" => "unix-char",
                "path" => "/dev/kvm"
            ],
        ]
    );

    $lxd->profiles->rename('profile-name', 'new-profile-name');

    $lxd->profiles->remove('profile-name');

    $lxd->profiles->delete('profile-name');
