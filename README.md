float promedio(Lista *lista){
	int i;
	int largo;
  int suma=0;
  
  
	for(i=0;i<(fin(lista)-1);i++){
		suma+=recuperar(lista);
	}
	
  return suma/(fin(lista)-1);
