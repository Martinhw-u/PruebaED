  float promedio(Lista *lista){
	  int i, largo, suma=0;
	  largo=Fin(lista);
	  for(i=0;i<Fin(lista);i++){
		suma+=Recuperar(i,lista);
	}

  return suma/(largo);
  
}
