# LXD PHP Extension

WIP!

 ## Connection

    $lxd = (new \Lxd\Client([
        'certificate_path' => 'certificates',
        'timeout' => 30
    ]))->connect('https://127.0.0.1:8443', 'lxd.server.secret');

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
    )

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
 
 ## Operations
 
     $lxd->operations->all();
     
     $lxd->operations->info('operation-uuid');
     
     $lxd->operations->cancel('operation-uuid');
     
     $lxd->operations->wait('operation-uuid' , 30);
 
 ## Profiles
