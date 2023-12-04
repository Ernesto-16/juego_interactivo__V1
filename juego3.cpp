#include <iostream>
using namespace std;
// Función para mostrar las estadísticas del jugador
void mostrarEstadisticas(int vida, int oro, int magia) {
    std::cout << "Vida: " << vida << std::endl;
    std::cout << "Oro: " << oro << std::endl;
    std::cout << "Magia: " << magia << std::endl;


}

int main() {

    // Inicialización de las estadísticas del jugador
     int vida = 100;
    int oro = 100;
    int magia = 100;
    int respuesta = 0;
    bool continuar = true;
    
    // Bucle principal del juego
    while(continuar) {
	
	
        cout << "Bienvenido old gold " << endl << endl << endl << endl;
        cout << "MENU" << endl;
        cout << "ESCOOGE UNA OBCION TECLEANDO EL NUMERO QUE TIENE A LA IZQUIERDA ,ES RECOMENDABLE ENTRAR PRRIMERO ALA OPCION 1,2,4 \n" 
        <<"PARA PODER CONOCERR MAAS DEL JUEGO ANTES DE JUGAR"<<endl;
        cout << "1- objetivos" << endl;
        cout << "2-Artefactos para conseegir magia y descripcion" << endl;
        cout << "3-JUGAR" << endl;
        cout << "4-Acerca de" << endl;
        cout << "5-salir del programa" << endl;
        cin >> respuesta;

        // Manejo de las opciones del menú
        switch (respuesta) {
		
            case 1:
                cout << "Eres un duende llamado Ciru el cual su objetivo es esconder su oro, \n"
                     << "sin perderlo ya que seria castigado por el rey duende con la muerte\n";
                break;
            case 2:
                cout << "Artefactos" << endl;
                cout << "Un trozo de la piedra de cintamani: este artefacto hace que recuperes tu vida  yy talves mas" << endl;
                cout << "Baritas magicas: Hacen que tu magia suba 30 o 20 puntos puntos " << endl;
                cout << "oro: sube tu cantidad de oro " << endl;
                break;
            case 3:
                // Código para la opción de jugar
                cout<<"\nSE VA HACER LA REUNION DE LA DE LA DECADA PARA VER SI TODOS LOS DUENDES CONSEVAN SU ORO\n" 
                <<"PERO TODOS SON ANBICIOSOS Y QUIREN MAS Y MAS ORO \n" 
                <<"QUE VAS HACER PARA  ESCONDER O PRROTEGER TU ORO DE OTROS SERES FANTASTICOS O HUMAANOS \n" 
                <<"Escoje alguna de las siguientes obciones tecleando el numero a su izquierda\n\n"; 
                 mostrarEstadisticas(vida, oro, magia); 
                cout<<"\n1-En este camino vas esconder el oro  en un poso que no se puede entrar\n"  
                <<"y por ello necitas magia para que nadie entre"<<endl;
           
               cout<<"2-En este camino lo vas esconer en una isla  en la cual al momento de entar\n"  
               <<"pierdes la memoria a ecepcion de los que ya viven ahi desde su inicio ,cualquier otra persona\n"
               <<"se quedara ahi y ya no saldra nunca porque no va recordar ni como llego pero tu con magia si podras"<<endl;
      
               cout<<"3-Dejarlo en una isla llena de moustros cerca de un poso encantado con un acertijo "<<endl;
               
               cin>>respuesta; 
                  switch(respuesta){ //este esstrrucctura de control es de toddo el menu principal cuando ya enpiesas a jugar
                   
                    case 1 : 
                      cout<<"Tendremos quee ir a la isla Miyake-jima"<<endl; //si el usiario eligio la primerr opcion 
                       
                      cout<<"COMO QUIERES LLEVAGAR A LA ISLA nota: algunas  obciones pueden consumir oro o magia"<<endl;
				   	mostrarEstadisticas(vida, oro, magia);
				   	
				   	cout<<"1-En un barco pero de manera cautelosa para no ser visto"<<endl;
				   	cout<<"2-Con ayuda de un mago"<<endl;
				   	cout<<"3-Canbiar de forma y viajar como un animal domestico"<<endl<<endl;
				   	cin>>respuesta;
				   	
				   	switch(respuesta){
					   
				   	
				   	 case 1:
				   		
				   		cout<<"Has perdido un poco de megia"<<endl<<endl;//si el usuario vueelve a elgir la prrimera opcion
				   		magia=magia-20;
				   		mostrarEstadisticas(vida, oro, magia);
				   		cout<<"para poder ir en barco de manera cautelosa nesecitamos hacernos invicibles en algunos ratos\n"
				   		<<"ahora necitamos decidir como llegar al poso elige un opcion tecleando su numerro a la izquierda\n"
				   		<<"1-Ya hemos llegado a la isla podemos ir al poso con magia(volando) para evitar a los mouestros\n"
				   		<<"2-Pelear contra los moustros\n"
				   		<<"3-ir cautelosamente sin enfrentar a nadie\n\n";
				   		cin>>respuesta;
				   		
				   		switch(respuesta){
				   			
				   			case 1:
				   				cout<<"Gastamos un poco de magia pero lo logramos "<<endl;//volvio a elegir la opcion 1
				   				magia=magia-20;
				   		        mostrarEstadisticas(vida, oro, magia);
				   		        cout<<"Ahora que guardamos el oro en el poso usaremmos toda la magia para poder no olvidar\n"
				   		        <<"nada  y que se mantenga el hechiizo lametablemente nos hemos quedado sin magia para defendernos\n";
				   		        magia=magia-60;
				   		        mostrarEstadisticas(vida, oro, magia);
				   		        cout<<"1-nos escondemos para que no nos maten \n"
				   		        <<"2-Bucamos artefactos magicos para recuperar magia\n"
				   		        <<"3-vivimos en la isla hata recuperar lo suficiente\n\n ";
				   		        cin>>(respuesta);
				   		         switch(respuesta){
				   		         	case 1:
				   		         	  cout<<"lo logramos gracias a que nos escondimos encontramos mas oro donde nos escondimos  y sobrevivimos\n"
				   		         	  <<"nuestro oro esta asalvo y nosotros taambien \n "
				   		         	  <<"que quieres hacer escoge un opcion tecleando su numero a la izquierda\n";
				   		         	  oro=oro+20;
				   		         	  magia=magia+100;
				   		         	  mostrarEstadisticas(vida, oro, magia);
				   		         	  cout<<"1-buscar mas oro en la isla "<<endl;
				   		         	  cout<<"2-mejor nos vamos "<<endl;
				   		         	  cout<<"3-pelear contra moustros"<<endl;
				   		         	  cin>>respuesta;
				   		         	    switch(respuesta){
				   		         	   	    case 1:
				   		         	   	 	cout<<"escontramos mas oro"<<endl;
				   		         	   	 	    oro=oro+20;
				   		         	   	 	    mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"La reunion ah llegado y ahora tenemos nuestro oro y\n "
				   		         	   	 	    <<"y mas ,el rey duende nos a felicitado\n\n";
				   		         	   	 	    cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	   	 	    
				   		         	   	 	break;
				   		         	   	    case 2:
				   		         	   	  	mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"La reunion ah llegado y ahora tenemos nuestro oro \n "
				   		         	   	 	    <<"los que no cumplieron con su oro el rey duende los privo la de magia\n"
				   		         	   	 	    <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	     cout<<"gracias por jugar hasta pronto"<<endl;
										    break;
										    case 3:
										   	vida=vida-40;
										   	oro=oro+20;
										   	cout<<"perdimos un poco de vida  pero ganamos oro"<<endl;
										   	mostrarEstadisticas(vida, oro, magia);
										   	cout<<"La reunion ah llegado y ahora tenemos nuestro oro y\n "
				   		         	   	 	    <<"y mas ,el rey duende nos a felicitado y dado  \n\n"
				   		         	   	 	    <<"Un trozo de la piedra de cintamani\n\n";
				   		         	   	 	    vida=vida+40;
				   		         	   	 	    mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"gracias por jugar hasta pronto"<<endl; 
										    break;			 	
				   		        
				   		         	   	   
										   }//es de la ultima interaccionde la prrimera obcion de lo logramos
				   		         	  
				   		         	break;//es de tdo el premer caso
				   		         	case 2:
				   		         		cout<<"encontramos una varita magica tenia muy poca magia pero nos ha ayudado ,"<<endl; 
										cout<<"recuerdaa que en el lugar hay magos cerca"<<endl;
				   		         		magia=magia+20;
				   		         		mostrarEstadisticas(vida, oro, magia);
				   		         		cout<<"parece haber un mago cerca que quires hacer, teclea el nummero de la opccion que eligas"<<endl;
				   		         		cout<<"1-mejor con eso nos escondemmoss y ya es mas seguro"<<endl;
				   		         		cout<<"2-lo vamos a enfrentar"<<endl;
				   		         		cout<<"3-buscar mas cosas"<<endl;
				   		         		cin>>respuesta;
				   		         		    switch(respuesta){
				   		         		  	    case 1:
				   		         		  	 	    mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	        cout<<"La reunion ah llegado y ahora tenemos nuestro oro \n "
				   		         	   	 	        <<"los que no cumplieron con su oro el rey duende los privo la de magia\n"
				   		         	   	 	        <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	     cout<<"gracias por jugar hasta pronto"<<endl;
				   		         		  	 	break;
				   		         		  	 	case 2:
				   		         		  	 		magia=magia-20;
				   		         		  	 		vida=vida-40;
				   		         		  	 		mostrarEstadisticas(vida, oro, magia);
				   		         		  	 		cout<<"El mago era demaciodo fuerte no llegamos a la reunion "<<endl;
				   		         		  	 		cout<<"Nuestro oro sigue en el poso pero el mago nos capturo"<<endl<<endl;
				   		         		  	 		cout<<"gracias por jugar hasta pronto"<<endl;
				   		         		  	 	break;
				   		         		  	 	
				   		         		  	 	case 3:
				   		         		  	 		
				   		         		  	 		cout<<"al buscar cosas no tuvimos la misma suerte y nos encontramos al mago"<<endl;
				   		         		  	 		magia=magia-20;
				   		         		  	 		vida=vida-40;
				   		         		  	 		mostrarEstadisticas(vida, oro, magia);
				   		         		  	 		cout<<"El mago era demaciodo fuerte no llegamos a la reunion "<<endl;
				   		         		  	 		cout<<"Nuestro oro sigue en el poso pero el mago nos capturo"<<endl<<endl;
				   		         		  	 		cout<<"gracias por jugar hasta pronto"<<endl;
				   		         		  	 		
				   		         		  	 		
				   		         		  	    break;
				   		         		  	
				   		         		  	
											  }//es de parece haber un mago cerca
				   		         		
				   		         		
				   		         		
				   		         	break;
				   		         	case 3://vivimos en la isla hata recuperar lo suficiente
				   		         	cout<<"fue muy dificil a pesar de todo consegimos oro y con el tienpo magia "<<endl<<endl;
				   		         	vida =vida-40;
				   		         	oro=oro +40;
				   		         	magia=magia+100;
				   		         	mostrarEstadisticas(vida, oro, magia);
				   		         	cout<<"Prece haber un mago cerca  que quires hacer teclea el numero ala izquieda de la opcion que escojas"<<endl;
				   		         	cout<<"1-Enfrentarlo y quedarme con su magia y riquesas"<<endl;
				   		         	cout<<"2-Mejor me quedo con lo que tengo"<<endl;
				   		         	cout<<"3-pelear contra moustros"<<endl;
				   		         	cin>>respuesta;
				   		         	    switch(respuesta){
											case 1:
												oro=oro+50;
												 mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	        cout<<"La reunion ah llegado y ahora tenemos nuestro oro  y mas\n "
				   		         	   	 	        <<"los que no cumplieron con su oro el rey duende los privo la de magia\n"
				   		         	   	 	        <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	        cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	   	  	        
											break;
											case 2:
												 mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	        cout<<"La reunion ah llegado y ahora tenemos nuestro oro \n "
				   		         	   	 	        <<"los que no cumplieron con su oro el rey duende los privo la de magia\n"
				   		         	   	 	        <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	        cout<<"gracias por jugar hasta pronto"<<endl;
											break;
											case 3:
												oro=oro+50;
												 mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	        cout<<"La reunion ah llegado y ahora tenemos nuestro oro  y mas\n "
				   		         	   	 	        <<"los que no cumplieron con su oro el rey duende los privo la de magia\n"
				   		         	   	 	        <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	        cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	   	  	        
											break;				   		         	    	
				   		         	    	
				   		         	    	
				   		         	    	
				   		         	    	
											}//vivimos en la isla hata recuperar lo suficiente
				   		         	    
				   		         	  
				   		         	
				   		         	
				   		         	
				   		         		
				   		         	break;//vivimos en la isla hata recuperar lo suficiente
				   		         	
				   		         	
				   		         	
									}// este switch es de gastamos un poco de magia
				   		         
				   		        
				   		        
				   		      case 2://como llegar al poso Pelear ,pelear contra los moustrros
				   		      cout<<"PERDIMOOS UN POCO DE VIDA PERO CONSEGIMOS un pocco de oro,"<<endl; 
								 cout<<" nota recuerda que hay magos cerca\n"<<endl;
				   		      oro=oro+20;
				   		      vida=vida-40;
				   		      magia=magia-30;
				   		      mostrarEstadisticas(vida, oro, magia);
				   		      cout<<"Un trozo de la piedra de cintamani"<<endl;
				   		      vida=vida+40;
				   		      mostrarEstadisticas(vida, oro, magia);//vida de 50
				   		         cout<<"que quieres hacer escoge una de las obciones del menu y teclea su numero de la izquierda"<<endl;
				   		         cout<<"1-ir a esconder el oro"<<endl;
				   		         cout<<"2-pelear mas contra moustros pero mas estrategiacamente"<<endl;
				   		         cout<<"3-buscar artefactos"<<endl;
				   		         cin>>respuesta;
				   		         switch (respuesta){
				   		         	case 1:
				   		         		cout<<"logramos esconder el oro pero perdimos un poco de vida \n"
				   		         		<<"la reunion ha llegado  y consevamos eel horo y mas"<<endl;
				   		         		cout<<"los que no cumplieron con su oro el rey duende los privo la de magia\n"
				   		         	   	<<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	break;
				   		         	case 2:
				   		         		oro=oro+50;
				   		         		vida=vida-30;
										mostrarEstadisticas(vida, oro, magia);
				   		         	   	cout<<"La reunion ah llegado y ahora tenemos nuestro oro  y mas\n "
				   		         	   	<<"los que no cumplieron con su oro el rey duende los privo la de magia\n"
				   		         	    <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	break;
				   		         	case 3:
				   		         		cout<<"al buscar cosas no tuvimos la misma suerte y nos encontramos al mago"<<endl;
				   		         		magia=magia-20;
				   		         		vida=vida-40;
				   		         		mostrarEstadisticas(vida, oro, magia);
				   		         		cout<<"El mago era demaciodo fuerte no llegamos a la reunion "<<endl;
				   		         		cout<<"Nuestro oro sigue en el poso pero el mago nos capturo"<<endl<<endl;
				   		         		cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	break;
				   		         	
									}// switch que quieres hacer escoge una de las obciones del menu y teclea su numero de la izquierda
				   		      
							  break;
							  case 3://como llegar al poso
							  //ir cautelosamente sin enfrentar a nadie
							  cout<<"tuvimos que utizar nuevamente magia para poder pasar desapercivido "<<endl;
							  magia=magia-20;
							  mostrarEstadisticas(vida, oro, magia);
				   		        cout<<"Ahora que guardamos el oro en el poso usaremmos toda la magia para poder no olvidar\n"
				   		        <<"nada  y que se manteega el hechiizo lametablemente nos hemos quedado sin magia para defendernos\n";
				   		        magia=magia-60;
				   		        mostrarEstadisticas(vida, oro, magia);
				   		        cout<<"1-nos escondemos para que no nos maten \n"
				   		        <<"2-Bucamos artefactos magicos para recuperar magia\n"
				   		        <<"3-vivimos en la isla hasta recuperar lo suficiente\n\n ";
				   		        cin>>(respuesta);
				   		        switch(respuesta){
				   		         	case 1:
				   		         	  cout<<"lo logramos gracias a que nos escondimos encontramos mas oro donde nos escondimos sobrevivimos\n"
				   		         	  <<"nuestro oro esta asalvo y nosotros taambien \n "
				   		         	  <<"que quieres hacer escoge un opcion tecleando su numero a la izquierda\n"
				   		         	  <<"y recuerda que hay un mago cerca"<<endl;
				   		         	  oro=oro+20;
				   		         	  magia=magia+100;
				   		         	  mostrarEstadisticas(vida, oro, magia);
				   		         	  cout<<"1-buscar mas oro en la isla "<<endl;
				   		         	  cout<<"2-mejor nos vamos "<<endl;
				   		         	  cout<<"3-pelear contra moustros"<<endl;
				   		         	  cin>>respuesta;
				   		         	    switch(respuesta){
				   		         	   	    case 1:
				   		         	   	 	cout<<"escontramos mas oro"<<endl;
				   		         	   	 	    oro=oro+20;
				   		         	   	 	    mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"La reunion ah llegado y ahora tenemos nuestro oro y\n "
				   		         	   	 	    <<"y mas ,el rey duende nos a felicitado\n\n";
				   		         	   	 	    cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	   	 	    
				   		         	   	 	break;
				   		         	   	    case 2:
				   		         	   	  	mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"La reunion ah llegado y ahora tenemos nuestro oro \n "
				   		         	   	 	    <<"los que no cumplieron con su oro el rey duende los privo de la magia\n"
				   		         	   	 	    <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	     cout<<"gracias por jugar hasta pronto"<<endl;
										    break;
										    case 3:
										   	vida=vida-40;
										   	oro=oro+20;
										   	cout<<"perdimos un poco de vida  pero ganamos oro"<<endl;
										   	mostrarEstadisticas(vida, oro, magia);
										   	cout<<"La reunion ah llegado y ahora tenemos nuestro oro y\n "
				   		         	   	 	    <<"y mas ,el rey duende nos a felicitado y dado  \n\n"
				   		         	   	 	    <<"Un trozo de la piedra de cintamani\n\n";
				   		         	   	 	    vida=vida+40;
				   		         	   	 	    mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"gracias por jugar hasta pronto"<<endl; 
										    break;			 	
				   		        
				   		         	   	   
										
										
												  }//del switch de ir cautelosamente sin enfrentar a nadie
									case 2://-Bucamos artefactos magicos para recuperar magia
				   		                 cout<<"PERDIMOOS UN POCO DE VIDA DEVIDO A NO TENER MAGIA PERO CONSEGIMOS UN POCO DE ORO\n"<<endl;
				   		                 cout<<"recuerda que hay un mago cerca"<<endl;
				   		                 oro=oro+20;
				   		                 vida=vida-40;
				   		                 mostrarEstadisticas(vida, oro, magia);
				   		                 cout<<"Un trozo de la piedra de cintamani"<<endl;
				   		                 vida=vida+40;
				   		                 mostrarEstadisticas(vida, oro, magia);
				   		                 
				   		         	   	 	    
				   		         	   	mostrarEstadisticas(vida, oro, magia);
				   		         	    cout<<"1-buscar mas oro en la isla "<<endl;
				   		         	    cout<<"2-mejor nos vamos "<<endl;
				   		         	    cout<<"3-pelear contra moustros"<<endl;
				   		         	    cin>>respuesta;
				   		         	    switch(respuesta){
				   		         	   	    case 1:
				   		         	   	 	cout<<"escontramos mas oro"<<endl;
				   		         	   	 	    oro=oro+20;
				   		         	   	 	    mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"La reunion ah llegado y ahora tenemos nuestro oro y\n "
				   		         	   	 	    <<"y mas ,el rey duende nos a felicitado\n\n";
				   		         	   	 	    cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	   	 	    
				   		         	   	 	break;
				   		         	   	    case 2:
				   		         	   	  	mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"La reunion ah llegado y ahora tenemos nuestro oro \n "
				   		         	   	 	    <<"los que no cumplieron con su oro el rey duende los privo de la magia\n"
				   		         	   	 	    <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	     cout<<"gracias por jugar hasta pronto"<<endl;
										    break;
										    case 3:
										   	vida=vida-40;
										   	oro=oro+20;
										   	cout<<"perdimos un poco de vida  pero ganamos oro"<<endl;
										   	mostrarEstadisticas(vida, oro, magia);
										   	cout<<"La reunion ah llegado y ahora tenemos nuestro oro y\n "
				   		         	   	 	    <<"y mas ,el rey duende nos a felicitado y dado  \n\n"
				   		         	   	 	    <<"Un trozo de la piedra de cintamani\n\n";
				   		         	   	 	    vida=vida+40;
				   		         	   	 	    mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"gracias por jugar hasta pronto"<<endl; 
										    break;		
				   		         	  break;// caso 2 de buscamos artefaactos magicospaaraa recuperar magia 	 	    
				   		                 
											}
				   		              
				   		            case 3:
				   		            //vivimos en la isla hata recuperar lo suficiente
				   		         	cout<<"fue muy dificil a pesar de todo consegimos oro y con el tienpo magia "<<endl<<endl;
				   		         	cout<<"nota:recuerda que hay un mago cerca"<<endl;
				   		         	vida =vida-40;
				   		         	oro=oro +40;
				   		         	magia=magia+100;
				   		         	mostrarEstadisticas(vida, oro, magia);
				   		         	cout<<"Prece haber un mago cerca  que quires hacer teclea el numero ala izquieda de la opcion que escojas"<<endl;
				   		         	cout<<"1-Enfrentarlo y quedarme con su magia y riquesas"<<endl;
				   		         	cout<<"2-Mejor me quedo con lo que tengo"<<endl;
				   		         	cout<<"3-pelear contra moustros"<<endl;
				   		         	cin>>respuesta;
				   		         	    switch(respuesta){
											case 1:
												oro=oro+50;
												 mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	        cout<<"La reunion ah llegado y ahora tenemos nuestro oro  y mas\n "
				   		         	   	 	        <<"los que no cumplieron con su oro el rey duende los privo  de la magia\n"
				   		         	   	 	        <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	        cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	   	  	        
											break;
											case 2:
												 mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	        cout<<"La reunion ah llegado y ahora tenemos nuestro oro \n "
				   		         	   	 	        <<"los que no cumplieron con su oro el rey duende los privo de la magia\n"
				   		         	   	 	        <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	        cout<<"gracias por jugar hasta pronto"<<endl;
											break;
											case 3:
												oro=oro+50;
												 mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	        cout<<"La reunion ah llegado y ahora tenemos nuestro oro  y mas\n "
				   		         	   	 	        <<"los que no cumplieron con su oro el rey duende los privo  de la magia\n"
				   		         	   	 	        <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	        cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	   	  	        
											break;				   		         	    	
				   		         	    	
				   		         	    	
				   		         	    	
				   		         	    	
											}//vivimos en la isla hata recuperar lo suficiente
				   		              break	;
										}//es de la ultima interaccionde la prrimera obcion de lo logramos
				   		         	        
				   		            
				   		        
							  
							  break;//como llegar al poso
							  //ir cautelosamente sin enfrentar a nadie  
				   		        
				   		        
				   		          	
						   }//esta estructura es del switch de  Has perdido un poco de megia
				   		
				   		
				   	break;//Es parra todo el caso 1 si el usuario escoge siempre la primmera opcion
				   	
				   	
				  	break;//este es el del caso 1
						}//este es del switch del caso 1
                  	
                  	case 2://aqui es del caso 2 dddonde loo ayuda un mago y apartir de aquii son por lo menos o tras 3 interaciones
                  	cout<<"Seria dificil encontar a un mago para una persona pero para un duende no \n "	
                  	<<"el mago shiganami nos ayudara pero devemos ofreserlee un tributo "<<endl;
                  	magia=magia-10;
                  	oro=oro-10;
                  	mostrarEstadisticas(vida, oro, magia);
                  	cout<<"1-Ya hemos llegado a la isla podemos ir al poso con magia(volando) para evitar a los mouestros\n"
				   		<<"2-Pelear contra los moustros\n"
				   		<<"3-ir cautelosamente sin enfrentar a nadie\n\n";
				   		cin>>respuesta;
				   		
				   		switch(respuesta){
				   			
				   			case 1:
				   				cout<<"Gastamos un poco de magia pero lo logramos "<<endl;//volvio a elegir la opcion 1
				   				magia=magia-20;
				   		        mostrarEstadisticas(vida, oro, magia);
				   		        cout<<"Ahora que guardamos el oro en el poso usaremmos todoa la magia paara poder no olvidar\n"
				   		        <<"nada  y que se manteega el echiizo lametablemente nos hemos queda sin magia para defendernos\n"
								<<"recuerda que hay un mago cerca";
				   		        magia=magia-60;
				   		        mostrarEstadisticas(vida, oro, magia);
				   		        cout<<"1-nos escondemos para que no nos maten \n"
				   		        <<"2-Bucamos artefactos magicos para recuperar magia\n"
				   		        <<"3-vivimos en la isla hata recuperar lo suficiente\n\n ";
				   		        cin>>(respuesta);
				   		         switch(respuesta){
				   		         	case 1:
				   		         	  cout<<"lo logramos gracias a que nos escondimos encontramos mas oro donde nos escondimos sobrevivimos\n"
				   		         	  <<"nuestro oro esta asalvo y nosotros taambien \n "
				   		         	  <<"que quieres hacer escoge un opcion tecleando su numero a la izquierda\n";
				   		         	  oro=oro+20;
				   		         	  magia=magia+100;
				   		         	  mostrarEstadisticas(vida, oro, magia);
				   		         	  cout<<"1-buscar mas oro en la isla "<<endl;
				   		         	  cout<<"2-mejor nos vamos "<<endl;
				   		         	  cout<<"3-pelear contra moustros"<<endl;
				   		         	  cin>>respuesta;
				   		         	    switch(respuesta){
				   		         	   	    case 1:
				   		         	   	 	cout<<"escontramos mas oro"<<endl;
				   		         	   	 	    oro=oro+20;
				   		         	   	 	    mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"La reunion ah llegado y ahora tenemos nuestro oro y\n "
				   		         	   	 	    <<"y mas ,el rey duende nos a felicitado\n\n";
				   		         	   	 	    cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	   	 	    
				   		         	   	 	break;
				   		         	   	    case 2:
				   		         	   	  	mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"La reunion ah llegado y ahora tenemos nuestro oro \n "
				   		         	   	 	    <<"los que no cumplieron con su oro el rey duende los privo de la magia\n"
				   		         	   	 	    <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	     cout<<"gracias por jugar hasta pronto"<<endl;
										    break;
										    case 3:
										   	vida=vida-40;
										   	oro=oro+20;
										   	cout<<"perdimos un poco de vida  pero ganamos oro"<<endl;
										   	mostrarEstadisticas(vida, oro, magia);
										   	cout<<"La reunion ah llegado y ahora tenemos nuestro oro y\n "
				   		         	   	 	    <<"y mas ,el rey duende nos a felicitado y dado  \n\n"
				   		         	   	 	    <<"Un trozo de la piedra de cintamani\n\n";
				   		         	   	 	    vida=vida+40;
				   		         	   	 	    mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"gracias por jugar hasta pronto"<<endl; 
										    break;			 	
				   		        
				   		         	   	   
										   }//es de la ultima interaccionde la prrimera obcion de lo logramos
				   		         	  
				   		         	break;//es de tdo el premer caso
				   		         	case 2:
				   		         		cout<<"encontramos una varita magica tenia muy poca magia pero nos ha ayudado "<<endl;
				   		         		magia=magia+20;
				   		         		mostrarEstadisticas(vida, oro, magia);
				   		         		cout<<"parece haber un mago cerca que quires hacer, teclea el nummero de la opccion que eligas"<<endl;
				   		         		cout<<"1-mejor con eso nos escondemmoss y ya es mas seguro"<<endl;
				   		         		cout<<"2-lo vamos a enfrentar"<<endl;
				   		         		cout<<"3-buscar mas cosas"<<endl;
				   		         		cin>>respuesta;
				   		         		    switch(respuesta){
				   		         		  	    case 1:
				   		         		  	 	    mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	        cout<<"La reunion ah llegado y ahora tenemos nuestro oro \n "
				   		         	   	 	        <<"los que no cumplieron con su oro el rey duende los privo la de magia\n"
				   		         	   	 	        <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	     cout<<"gracias por jugar hasta pronto"<<endl;
				   		         		  	 	break;
				   		         		  	 	case 2:
				   		         		  	 		magia=magia-20;
				   		         		  	 		vida=vida-40;
				   		         		  	 		mostrarEstadisticas(vida, oro, magia);
				   		         		  	 		cout<<"El mago era demaciodo fuerte no llegamos a la reunion "<<endl;
				   		         		  	 		cout<<"Nuestro oro sigue en el poso pero el mago nos capturo"<<endl<<endl;
				   		         		  	 		cout<<"gracias por jugar hasta pronto"<<endl;
				   		         		  	 	break;
				   		         		  	 	
				   		         		  	 	case 3:
				   		         		  	 		
				   		         		  	 		cout<<"al buscar cosas no tuvimos la misma suerte y nos encontramos al mago"<<endl;
				   		         		  	 		magia=magia-20;
				   		         		  	 		vida=vida-40;
				   		         		  	 		mostrarEstadisticas(vida, oro, magia);
				   		         		  	 		cout<<"El mago era demaciodo fuerte no llegamos a la reunion "<<endl;
				   		         		  	 		cout<<"Nuestro oro sigue en el poso pero el mago nos capturo"<<endl<<endl;
				   		         		  	 		cout<<"gracias por jugar hasta pronto"<<endl;
				   		         		  	 		
				   		         		  	 		
				   		         		  	 	break;
				   		         		  	
				   		         		  	
											  }//es de parece haber un mago cerca
				   		         		
				   		         		
				   		         		
				   		         	break;
				   		         	case 3://vivimos en la isla hata recuperar lo suficiente
				   		         	cout<<"fue muy dificil a pesar de todo consegimos oro y con el tienpo magia "<<endl<<endl;
				   		         	vida =vida-40;
				   		         	oro=oro +40;
				   		         	magia=magia+100;
				   		         	mostrarEstadisticas(vida, oro, magia);
				   		         	cout<<"Prece haber un mago cerca  que quires hacer teclea el numero ala izquieda de la opcion que escojas"<<endl;
				   		         	cout<<"1-Enfrentarlo y quedarme con su magia y riquesas"<<endl;
				   		         	cout<<"2-Mejor me quedo con lo que tengo"<<endl;
				   		         	cout<<"3-pelear contra moustros"<<endl;
				   		         	cin>>respuesta;
				   		         	    switch(respuesta){
											case 1:
												oro=oro+50;
												 mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	        cout<<"La reunion ah llegado y ahora tenemos nuestro oro  y mas\n "
				   		         	   	 	        <<"los que no cumplieron con su oro el rey duende los privo de la magia\n"
				   		         	   	 	        <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	        cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	   	  	        
											break;
											case 2:
												 mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	        cout<<"La reunion ah llegado y ahora tenemos nuestro oro \n "
				   		         	   	 	        <<"los que no cumplieron con su oro el rey duende los privo la de magia\n"
				   		         	   	 	        <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	        cout<<"gracias por jugar hasta pronto"<<endl;
											break;
											case 3:
												oro=oro+50;
												 mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	        cout<<"La reunion ah llegado y ahora tenemos nuestro oro  y mas\n "
				   		         	   	 	        <<"los que no cumplieron con su oro el rey duende los privo la de magia\n"
				   		         	   	 	        <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	        cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	   	  	        
											break;				   		         	    	
				   		         	    	
				   		         	    	
				   		         	    	
				   		         	    	
											}//vivimos en la isla hata recuperar lo suficiente
				   		         	    
				   		         	  
				   		         	
				   		         	
				   		         	
				   		         		
				   		         	break;//vivimos en la isla hata recuperar lo suficiente
				   		         	
				   		         	
				   		         	
									}// este switch es de gastamos un poco de magia
				   		         
				   		        
                  	
                  	
                  		
                  	break;
                  	
                  	       case 2://este es el caso de descoger un 1 despuespelear contra los moustros
                  		     cout<<"PERDIMOOS UN POCO DE VIDA PERO CONSEGIMOS UN POCO DE ORO ADEMAS PARECIA\n"
							   <<"haber un mago cerca y no nos quiso enfrentar NOS AHORAMOS UN CONBATE Y ENCONTRAMOS"<<endl;
				   		      oro=oro+20;
				   		      vida=vida-40;
				   		      magia=magia-30;
				   		      mostrarEstadisticas(vida, oro, magia);
				   		      cout<<"Un trozo de la piedra de cintamani"<<endl;
				   		      vida=vida+40;
				   		      mostrarEstadisticas(vida, oro, magia);//vida de 50
				   		         cout<<"que quieres hacer escoge una de las obciones del menu y teclea su numero de la izquierda"<<endl;
				   		         cout<<"1-ir a esconder el oro"<<endl;
				   		         cout<<"2-pelear mas contra moustros pero mas estrategiacamente"<<endl;
				   		         cout<<"3-buscar artefactos"<<endl;
				   		         cin>>respuesta;
				   		         switch (respuesta){
				   		         	case 1:
				   		         		mostrarEstadisticas(vida, oro, magia);
				   		         		cout<<"logramos esconder el oro pero perdimos un poco de vida \n"
				   		         		<<"la reunion ha llegado  y consevamos eel horo y mas"<<endl;
				   		         		cout<<"los que no cumplieron con su oro el rey duende los privo la de magia\n"
				   		         	   	<<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	break;
				   		         	case 2:
				   		         		oro=oro+50;
				   		         		vida=vida-30;
										mostrarEstadisticas(vida, oro, magia);
				   		         	   	cout<<"La reunion ah llegado y ahora tenemos nuestro oro  y mas\n "
				   		         	   	<<"los que no cumplieron con su oro el rey duende los privo  de la magia\n"
				   		         	    <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	break;
				   		         	case 3:
				   		         		cout<<"al buscar cosas no tuvimos la misma suerte y nos encontramos al mago"<<endl;
				   		         		magia=magia-20;
				   		         		vida=vida-40;
				   		         		mostrarEstadisticas(vida, oro, magia);
				   		         		cout<<"El mago era demaciodo fuerte no llegamos a la reunion "<<endl;
				   		         		cout<<"Nuestro oro sigue en el poso pero el mago nos capturo"<<endl<<endl;
				   		         		cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	break;
				   		         	
									}// switch que quieres hacer escoge una de las obciones del menu y teclea su numero de la izquierda
				   		      
							  break;
                  	       break;
                  	       case 3://ESTA ES LA OPCION DE 1,2 y 3 de ir coutelosamente
                  	       	cout<<"lo logramos gracias a que nos escondimos encontramos mas oro donde nos escondimos sobrevivimos\n"
				   		         	  <<"nuestro oro esta asalvo y nosotros taambien \n "
				   		         	  <<"que quieres hacer escoge un opcion tecleando su numero a la izquierda\n"
				   		         	  <<"recuerda qque hay un mago cerca"<<endl;
				   		         	  oro=oro+20;
				   		         	  magia=magia+100;
				   		         	  mostrarEstadisticas(vida, oro, magia);
				   		         	  cout<<"1-buscar mas oro en la isla "<<endl;
				   		         	  cout<<"2-mejor nos vamos "<<endl;
				   		         	  cout<<"3-pelear contra moustros"<<endl;
				   		         	  cin>>respuesta;
				   		         	    switch(respuesta){
				   		         	   	    case 1:
				   		         	   	 	cout<<"escontramos mas oro"<<endl;
				   		         	   	 	    oro=oro+20;
				   		         	   	 	    mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"La reunion ah llegado y ahora tenemos nuestro oro y\n "
				   		         	   	 	    <<"y mas ,el rey duende nos a felicitado\n\n";
				   		         	   	 	    cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	   	 	    
				   		         	   	 	break;
				   		         	   	    case 2:
				   		         	   	  	mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"La reunion ah llegado y ahora tenemos nuestro oro \n "
				   		         	   	 	    <<"los que no cumplieron con su oro el rey duende los privo de la magia\n"
				   		         	   	 	    <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	     cout<<"gracias por jugar hasta pronto"<<endl;
										    break;
										    case 3:
										   	vida=vida-40;
										   	oro=oro+20;
										   	cout<<"perdimos un poco de vida  pero ganamos oro"<<endl;
										   	mostrarEstadisticas(vida, oro, magia);
										   	cout<<"La reunion ah llegado y ahora tenemos nuestro oro y\n "
				   		         	   	 	    <<"y mas ,el rey duende nos a felicitado y dado  \n\n"
				   		         	   	 	    <<"Un trozo de la piedra de cintamani\n\n";
				   		         	   	 	    vida=vida+40;
				   		         	   	 	    mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"gracias por jugar hasta pronto"<<endl; 
										    break;			 	
				   		        
				   		         	   	   
										   }//es de la ultima interaccionde la prrimera obcion de lo logramos
				   		         	  
                  	       break;
                  	
					  }
                  	case 3://3-Canbiar de forma y viajar como un animal domestico
                  	    	cout<<"Gastamos un poco de magia pero lo logramos "<<endl;//volvio a elegir la opcion 1
				   				magia=magia-20;
				   		        mostrarEstadisticas(vida, oro, magia);
				   		        cout<<"Ahora que guardamos el oro en el poso usaremmos toda la magia paara poder no olvidar\n"
				   		        <<"nada  y que se manteega el echiizo lametablemente nos hemos queda sin magia para defendernos\n";
				   		        magia=magia-60;
				   		        mostrarEstadisticas(vida, oro, magia);
				   		        cout<<"1-nos escondemos para que no nos maten \n"
				   		        <<"2-Bucamos artefactos magicos para recuperar magia\n"
				   		        <<"3-vivimos en la isla hasta recuperar lo suficiente\n\n ";
				   		        cin>>(respuesta);
				   		         switch(respuesta){
				   		         	case 1:
				   		         	  cout<<"lo logramos gracias a que nos escondimos encontramos mas oro donde nos escondimos sobrevivimos\n"
				   		         	  <<"nuestro oro esta asalvo y nosotros taambien \n "
				   		         	  <<"que quieres hacer escoge un opcion tecleando su numero a la izquierda\n"
									   <<"recuerda que hay un mago cerca";
				   		         	  oro=oro+20;
				   		         	  magia=magia+100;
				   		         	  mostrarEstadisticas(vida, oro, magia);
				   		         	  cout<<"1-buscar mas oro en la isla "<<endl;
				   		         	  cout<<"2-mejor nos vamos "<<endl;
				   		         	  cout<<"3-pelear contra moustros"<<endl;
				   		         	  cin>>respuesta;
				   		         	    switch(respuesta){
				   		         	   	    case 1:
				   		         	   	 	cout<<"escontramos mas oro"<<endl;
				   		         	   	 	    oro=oro+20;
				   		         	   	 	    mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"La reunion ah llegado y ahora tenemos nuestro oro y\n "
				   		         	   	 	    <<"y mas ,el rey duende nos a felicitado\n\n";
				   		         	   	 	    cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	   	 	    
				   		         	   	 	break;
				   		         	   	    case 2:
				   		         	   	  	mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"La reunion ah llegado y ahora tenemos nuestro oro \n "
				   		         	   	 	    <<"los que no cumplieron con su oro el rey duende los privo  de  la magia\n"
				   		         	   	 	    <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	     cout<<"gracias por jugar hasta pronto"<<endl;
										    break;
										    case 3:
										   	vida=vida-40;
										   	oro=oro+20;
										   	cout<<"perdimos un poco de vida  pero ganamos oro"<<endl;
										   	mostrarEstadisticas(vida, oro, magia);
										   	cout<<"La reunion ah llegado y ahora tenemos nuestro oro y\n "
				   		         	   	 	    <<"y mas ,el rey duende nos a felicitado y dado  \n\n"
				   		         	   	 	    <<"Un trozo de la piedra de cintamani\n\n";
				   		         	   	 	    vida=vida+40;
				   		         	   	 	    mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	    cout<<"gracias por jugar hasta pronto"<<endl; 
										    break;			 	
				   		        
				   		         	   	   
										   }//es de la ultima interaccionde la prrimera obcion de lo logramos
				   		         	  
				   		         	break;//es de tdo el premer caso
				   		         	case 2:
				   		         		cout<<"encontramos una varita magica tenia muy poca magia pero nos ha ayudado "<<endl;
				   		         		magia=magia+20;
				   		         		mostrarEstadisticas(vida, oro, magia);
				   		         		cout<<"parece haber un mago cerca que quires hacer, teclea el nummero de la opccion que eligas"<<endl;
				   		         		cout<<"1-mejor con eso nos escondemmoss y ya es mas seguro"<<endl;
				   		         		cout<<"2-lo vamos a enfrentar"<<endl;
				   		         		cout<<"3-buscar mas cosas"<<endl;
				   		         		cin>>respuesta;
				   		         		    switch(respuesta){
				   		         		  	    case 1:
				   		         		  	 	    mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	        cout<<"La reunion ah llegado y ahora tenemos nuestro oro \n "
				   		         	   	 	        <<"los que no cumplieron con su oro el rey duende los privo de la magia\n"
				   		         	   	 	        <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	     cout<<"gracias por jugar hasta pronto"<<endl;
				   		         		  	 	break;
				   		         		  	 	case 2:
				   		         		  	 		magia=magia-20;
				   		         		  	 		vida=vida-40;
				   		         		  	 		mostrarEstadisticas(vida, oro, magia);
				   		         		  	 		cout<<"El mago era demaciodo fuerte no llegamos a la reunion "<<endl;
				   		         		  	 		cout<<"Nuestro oro sigue en el poso pero el mago nos capturo"<<endl<<endl;
				   		         		  	 		cout<<"gracias por jugar hasta pronto"<<endl;
				   		         		  	 	break;
				   		         		  	 	
				   		         		  	 	case 3:
				   		         		  	 		
				   		         		  	 		cout<<"al buscar cosas no tuvimos la misma suerte y nos encontramos al mago"<<endl;
				   		         		  	 		magia=magia-20;
				   		         		  	 		vida=vida-40;
				   		         		  	 		mostrarEstadisticas(vida, oro, magia);
				   		         		  	 		cout<<"El mago era demaciodo fuerte no llegamos a la reunion "<<endl;
				   		         		  	 		cout<<"Nuestro oro sigue en el poso pero el mago nos capturo"<<endl<<endl;
				   		         		  	 		cout<<"gracias por jugar hasta pronto"<<endl;
				   		         		  	 		
				   		         		  	 		
				   		         		  	 	break;
				   		         		  	
				   		         		  	
											  }//es de parece haber un mago cerca
				   		         		
				   		         		
				   		         		
				   		         	break;
				   		         	case 3://vivimos en la isla hata recuperar lo suficiente
				   		         	cout<<"fue muy dificil a pesar de todo consegimos oro y con el tienpo magia "<<endl<<endl;
				   		         	vida =vida-40;
				   		         	oro=oro +40;
				   		         	magia=magia+100;
				   		         	mostrarEstadisticas(vida, oro, magia);
				   		         	cout<<"Prece haber un mago cerca  que quires hacer teclea el numero ala izquieda de la opcion que escojas"<<endl;
				   		         	cout<<"1-Enfrentarlo y quedarme con su magia y riquesas"<<endl;
				   		         	cout<<"2-Mejor me quedo con lo que tengo"<<endl;
				   		         	cout<<"3-pelear contra moustros"<<endl;
				   		         	cin>>respuesta;
				   		         	    switch(respuesta){
											case 1:
												oro=oro+50;
												 mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	        cout<<"La reunion ah llegado y ahora tenemos nuestro oro  y mas\n "
				   		         	   	 	        <<"los que no cumplieron con su oro el rey duende los privo  de la magia\n"
				   		         	   	 	        <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	        cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	   	  	        
											break;
											case 2:
												 mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	        cout<<"La reunion ah llegado y ahora tenemos nuestro oro \n "
				   		         	   	 	        <<"los que no cumplieron con su oro el rey duende los privo  de la magia\n"
				   		         	   	 	        <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	        cout<<"gracias por jugar hasta pronto"<<endl;
											break;
											case 3:
												oro=oro+50;
												 mostrarEstadisticas(vida, oro, magia);
				   		         	   	 	        cout<<"La reunion ah llegado y ahora tenemos nuestro oro  y mas\n "
				   		         	   	 	        <<"los que no cumplieron con su oro el rey duende los privo  de  la magia\n"
				   		         	   	 	        <<"por un tienpo y tenian que buscar mas oro\n\n";
				   		         	   	  	        cout<<"gracias por jugar hasta pronto"<<endl;
				   		         	   	  	        
											break;				   		         	    	
				   		         	    	
				   		         	    	
				   		         	    	
				   		         	    	
											}//vivimos en la isla hata recuperar lo suficiente
				   		         	    
				   		         	  
				   		         	
				   		         	
				   		         	
				   		         		
				   		         	break;//vivimos en la isla hata recuperar lo suficiente
				   		         	
				   		         	
				   		         	
									}// este switch es de gastamos un poco de magia
				   		         
                  	
                  	
                  	
                  	break;
                
                   
                    	
                    	
                    
                    
                    
                  
                    
                    
                    
                    
                    } //DEL SWITCH DE todo el menu de la prrimer interraccion con el usuario dentro de la opcion jugar
                
                
                
                continuar = false;//para que no me mande al menu principal
                break;//DE TODO EL CASO 3 DE JUGAR
            case 4:
                cout << "Estas jugando un juego de fantasia en su version 1.0 " << endl;
                cout << "Soporte: ernesto1602@gmail.com" << endl;
                break;
            case 5:
                cout << "Gracias por jugar hasta pronto" << endl;
                exit(0);
                break;
        }//DE TODO EL SWITCH DE LA PRRIMERA INTERACCION DE JUGAR
    }//DEL WHILE

    return 0;
} //DE LA FUNCION PRINCIPAAL


