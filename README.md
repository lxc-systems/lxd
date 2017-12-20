# LXD PHP Extension

WIP!

 ## Connection

    $lxd = (new \Lxd\Client([
        'certificate_path' => 'certificates'
    ]))->connect('https://127.0.0.1:8443', 'lxd.server.secret');

 ## Host
   
    $lxd->info();

 ## Certificates
 
    $lxd->certificates->all();
    
    $lxd->certificates->info('certificate-fingerprint');
    
    $lxd->certificates->remove('certificate-fingerprint');
    
    $lxd->certificates->add(
        'certificates/127.0.0.1/cert.crt',
	   'lxd.server.secret',
	   'My Client Certificate'
    )

 ## Containers
 
 **Files**
 
    $client->containers->files->read('container-name', '/path/to/file');
    
    $client->containers->files->write('container-name', '/path/to/file', 'File Contents', 0644, 0, 0);
    
    $client->containers->files->delete('container-name', '/path/to/file');
 
 **Logs**
 
    $lxd->containers->logs->all('container-name');
    
    $lxd->containers->logs->read('container-name', 'log.name.log');
    
    $lxd->containers->logs->remove('container-name', 'log.name.log'); // alias for delete
    
    $lxd->containers->logs->delete('container-name', 'log.name.log');

 ## Images
 
 ## Networks
 
 ## Operations
 
     $lxd->operations->all();
 
 ## Profiles
