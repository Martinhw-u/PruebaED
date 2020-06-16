   float promedio(Lista *lista){
	int i, largo, suma=0;
  
  
	for(i=0;i<Fin(lista);i++){
		suma+=Recuperar(lista);
	}

  return suma/(Fin(lista));
  
}


                   null
lista: !0! !1! !2! !3!
  n=3
  n+1=4=NULL
  fin(lista)= 4
