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

