LXD PHP Extension
---

WIP!

 # Connection

    $lxd = (new \Lxd\Client([
        'certificate_path' => 'certificates'
    ]))->connect('https://127.0.0.1:8443', 'lxd.server.secret');

 # Host
   
    $lxd->info();

 # Certificates
 
    $lxd->certificates->all();
    
    $lxd->certificates->info('certificate-fingerprint');
    
    $lxd->certificates->remove('certificate-fingerprint');
    
    $lxd->certificates->add(
        'certificates/127.0.0.1/cert.crt',
	   'lxd.server.secret',
	   'My Client Certificate'
    )

 # Containers

 # Images
 
 # Networks
 
 # Operations
 
     $lxd->operations->all();
 
 # Profiles
