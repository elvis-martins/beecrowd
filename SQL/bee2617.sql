select products.name, providers.name from products join providers ON (products.id_providers = 
                                                                      providers.id and providers.name =  'Ajax SA')