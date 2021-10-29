//Adrian Palomino Rodriguez 19110293
// 6E6 
// AUTO AYUDA 
//Practica 2

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string.h>

using namespace std;


int main()
{
   int HO, dato = 1;
   int ME, Dato = 1;
   string Arranque;
   string Combustible;	
   string Com_Marca;
   string Bateria;
   string Correa;
   string Vacia;
   string olor;
   string Aceite;
   string Refigerante;
   string Agua;
   string Bujia;
   string Bujia_N;
   string Bujia_Ace;
   string Bujia_Agu;
   string Bujia_Des;
   string Bujia_Crem;
   string Frenado;
   string Temperatura;
   string Alerta_Bateria;
   string Antibloqueo;
   string Motor;
   string Explosiones;
   string Chillido;
   string Don_Chilli;
   string Solucion;
   string Vibra_Golp;
   string Humo_Olores;
   string Tablero;
	
   cout<<"---------------------AUTO AYUDA------------------"<<endl;
   cout<<"Este es un programa en que te ayudara a resolver las fallas mas simples y comunes"<<endl;
   cout<<"que pueden presentar tu coche, este programa esta dirigido a esas personas que "<<endl;
   cout<<"no tienen conocimieto a la mecanica o que tengan prisa en salir y no saben que es lo que"<<endl;
   cout<<"tiene su coche."<<endl;
   system("PAUSE");
   system("cls");

   cout<<"Bienvenido al programa AUTO AYUDA!!"<<endl;
   cout<<"Paso 1 :"<<endl;
   cout<<"Su coche no prende?"<<endl;
   cout<<"Escriba Si o No:"<<endl;
   cin>>Arranque;	
   system("cls");
   
   if(Arranque == "Si")
       {
            cout<<"Paso 2:"<<endl;  
   	        cout<<"Marca alguna senal en el tablero?"<<endl;	
   	        cout<<"Escriba Si o No:"<<endl;
            cin>>Tablero;	
            system("cls");
            
            if(Tablero == "Si")
               {
               	    cout<<"Paso 3:"<<endl;  
   	                cout<<"Te marca el sistema de frenado en el tablero?"<<endl;	
   	                cout<<"Escriba Si o No:"<<endl;
                    cin>>Frenado;
                    system("cls");
                      
                    if(Frenado == "Si")
                       {
                       	    cout<<"Pueden ser dos casos"<<endl,
                       	    cout<<"1) El freno de mano esta activado"<<endl;
                       	    cout<<"2) El nivel del liquido de frenado esta bajo"<<endl;
					   }
					
					else 
					   {
					    	cout<<"Paso 4:"<<endl;  
   	                        cout<<"Te marca la alerta de temperatura?"<<endl;	
   	                        cout<<"Escriba Si o No:"<<endl;
                            cin>>Temperatura;
                            system("cls");
                            
                           if(Temperatura == "Si")
                               {
                                	cout<<"La temperatura del motor es muy alta."<<endl,
                       	            cout<<"Revisa el nivel del liquido refigerante"<<endl;
					           }
					
					       else 
					          {
					   	            cout<<"Paso 5:"<<endl;  
   	                                cout<<"Te marca aleta de Bateria?"<<endl;	
   	                                cout<<"Escriba Si o No:"<<endl;
                                    cin>>Alerta_Bateria;
                                    system("cls");
                                    
                                    if(Alerta_Bateria == "Si")
                                       {
                       	                    cout<<"Indica que el nivel de voltaje de la bateria esta por debajo de lo normal"<<endl,
                       	                    cout<<"Necesita un cambio de bateria"<<endl;
				                	   }
					
					                else 
					                    {
					   	                    cout<<"Paso 6:"<<endl;  
   	                                        cout<<"Te marca el sistema de antibloqueo?"<<endl;	
   	                                        cout<<"Escriba Si o No:"<<endl;
                                            cin>>Antibloqueo;
                                            system("cls");
                                            
                                            if(Antibloqueo == "Si")
                                               {
                       	                            cout<<"Indica que el sistema de frenado del antibloqueo esta teniendo fallas"<<endl,
                       	                            cout<<"Es necesario llevarlo al un taller"<<endl;
                       	                            cout<<"Necesita un diagnostico a la brevedad"<<endl;
					                           }
					
				                        	else 
					                           {
					   	                            cout<<"Paso 9:"<<endl;  
   	                                                cout<<"Te marca el sistema falla en el motor?"<<endl;	
   	                                                cout<<"Escriba Si o No:"<<endl;
                                                    cin>>Motor;
                                                    system("cls");
                          
                                                    if(Motor == "Si")
                                                        {
                       	                                    cout<<"El motor tiene problemas en alguna parte"<<endl,
                       	                                    cout<<"Revisa, si tiene un cable suelto pues vuelve a conectarlo y si no "<<endl;
                       	                                    cout<<"LLEVALO CON UN MECANICO "<<endl;
					                                    }
					
				                                  	else 
					                                    {
					   	                                    cout<<"LLEVALO CON UN MECANICO"<<endl;
					   	
					                                     }   
					                           }    
					   	                }   
					   	
					          }   
					   	
					    }   
			   }
			
			else 
			   {
			   	    cout<<"Paso 3"<<endl;
		        	cout<<"Se escuchan explosiones inusuales saliendo del escape?"<<endl;
		        	cout<<"Escriba Si o No:"<<endl;
    	            cin>>Explosiones;
    	            system("cls");
    	            
    	            if(Explosiones == "Si")
    	            {
    	               cout<<"Esto es ocacionado por fallas en la combustion"<<endl;
					   cout<<"LLEVALO AL TALLER "<<endl;	
					}
					
					else
					{
					    cout<<"Paso 4"<<endl;
		             	cout<<"Se escuchan chillidos al encender el coche?"<<endl;
		        	    cout<<"Escriba Si o No:"<<endl;
    	                cin>>Chillido;
    	                system("cls");
    	                
    	                if(Chillido == "Si")
    	                    {
    	                    	cout<<"Paso 5"<<endl;
    	                    	cout<<"Sabes de donde viene el chillido?"<<endl;
    	                    	cout<<"Escriba Si o No"<<endl;
    	                    	cin>>Don_Chilli;
    	                    	system("cls");
    	                    	
    	                    	if(Don_Chilli == "Si")
    	                    	   {
    	                    	   	cout<<"Puedes solucinarlo?"<<endl;
    	                    	   	cout<<"Escriba Si o No"<<endl;
    	                    	    cin>>Solucion;
    	                    	    system("cls");
    	                    	     
    	                    	     if(Solucion == "Si")
    	                    	        {
    	                    	           cout<<"Trate de cambiar la pieza dañada o si esta floja o suelta solo aprietela"<<endl;
										   cout<<"Si no puede LLEVELO A UN TALLER"<<endl;	
										}
										
									  else 
									    {
									    	cout<<"LLEVELO A UN TALLER"<<endl;
										}	
								   }
								  
								else
								   {
								   	cout<<"LLEVELO A UN TALLER"<<endl;
								    }   
							}
    	            
    	                else 
    	                    {
    	                        cout<<"Paso 6"<<endl;
    	                    	cout<<"Se escucha o se siente vibraciones o golpeteos en la caja de velocidades?"<<endl;
    	                    	cout<<"Escriba Si o No:"<<endl;
    	                    	cin>>Vibra_Golp;
    	                    	system("cls");
								
								if(Vibra_Golp == "Si")
								    {
								      cout<<"Debes acudir al taller a que hagan una revision a la caja de velocidades"<<endl; 	
									}
									
								else 
								    {
								        cout<<"Paso 7"<<endl;
    	                    	        cout<<"Sele Humo o olores extraños?"<<endl;
    	                    	        cout<<"Escriba Si o No"<<endl;
    	                    	        cin>>Humo_Olores;
    	                    	        system("cls");
										
										if(Humo_Olores == "Si")
										   {
										   	cout<<"Paso 8"<<endl;
											cout<<"Humo o Olores?"<<endl;
											cout<<"Selecione el numero"<<endl;
											cout<<"1.-Humo"<<endl;
											cout<<"2.-Olor"<<endl;
											cin>>HO;
											system("cls");
											 
											if(HO == dato)
											       {
											       	cout<<"Paso 9"<<endl;
										        	cout<<"Sale el humo del motor o por el escape?"<<endl;
										        	cout<<"Selecione el numero"<<endl;
										        	cout<<"1.-Motor"<<endl;
										        	cout<<"2.-Escape"<<endl;
										        	cin>>ME;
										        	system("cls");
										        	
										        	if(ME == Dato)
										        	    {
										        	        cout<<"Tiene sobre calentamiento en el motor"<<endl;	
														}
													
													else 
													    {
													    	cout<<"Si sale humo blanco es algo normal"<<endl;
													    	cout<<"Pero si sale humo negro es por un contaminante en la gasolina"<<endl;
													    	cout<<"o es una filtracion de aceite"<<endl;
														}		
																								  											   
										            }
										    else
											       {
												    cout<<"Tienes fuga de aceite o de refigerante,"<<endl;
												    cout<<"como bandas quemadas o problemas en los frenos"<<endl;
										        	}        
										            
		
										  	
								    }	 	
							}
					}
    	        
			   }
		}
       }   
	
   else
       {
   	        cout<<"Paso 2"<<endl;
			cout<<"Su coche tiene combustible?"<<endl;
			cout<<"Escriba Si o No:"<<endl;
    	    cin>>Combustible;
    	    system("cls");
    	
    	   if(Combustible == "Si")
    	         {
    	         	cout<<"Paso 3:"<<endl; 
    	            cout<<"En el tablero marca que tiene combustible?"<<endl;
    	            cout<<"Escriba Si o No:"<<endl;
    	            cin>>Com_Marca;
    	            system("cls");
    	            
    	            if(Com_Marca == "Si")
    	                  {
    	                  	cout<<"Es posible que el sensor de nivel de gasolina se haya quedado colgando en le deposito"<<endl;
    	                  	cout<<"Paso 4:"<<endl;
    	                  	cout<<"La bateria del coche funciona?"<<endl;
    	                  	cout<<"Escriba Si o No:"<<endl;
    	                    cin>>Bateria;
    	                    system("cls");
    	                    
    	                    if(Bateria == "Si")
    	                      {
    	                        cout<<"Paso 5:"<<endl;	
    	                  	    cout<<"Revisa si los elementos de transmision"<<endl;
    	                  	    cout<<"Esta suelta la carcasa de la correa dentada o de la cadena de distribucion?"<<endl;
    	                  	    cout<<"Escriba Si o No:"<<endl;
    	                        cin>>Correa;
    	                        system("cls");
    	                         
    	                        if(Correa == "Si")
    	                           {
    	                                cout<<"Solo necesitas comprar y hacer el cambio de la correa o cadena"<<endl;	
							       }
								 
							    else
		    				        {
		    				        	cout<<"Paso 6:"<<endl;	
							            cout<<"Tiene acaite el veiculo?"<<endl;	
							            cout<<"Escriba Si o No:"<<endl;
							            cin>>Aceite;
							            system("cls");
							            
							            if(Aceite == "Si")
							               {
							            	cout<<"Paso 6:"<<endl;	
							                cout<<"Tienes refigerante el veiculo?"<<endl;	
							                cout<<"Escriba Si o No:"<<endl;
							                cin>>Refigerante;
							                system("cls");
							                
							                if(Refigerante == "Si")
							                   {
							                   	cout<<"Paso 7:"<<endl;	
							                    cout<<"Tiene agua el veiculo?"<<endl;	
							                    cout<<"Escriba Si o No:"<<endl;
							                    cin>>Agua;
							                    system("cls");
							                    
							                    if(Agua == "Si")
							                        {
							                            cout<<"Paso 8:"<<endl;	
							                            cout<<"La bujia esta en mal estado?"<<endl;	
							                            cout<<"Escriba Si o No:"<<endl;
							                            cin>>Bujia;	
							                            system("cls");
							                            
							                            if(Bujia == "Si")
							                                {
							                                   	cout<<"Paso 9:"<<endl;	
							                                    cout<<"La bujia esta de color negro?"<<endl;	
							                                    cout<<"Escriba Si o No"<<endl;
							                                    cin>>Bujia_N;
							                                    system("cls");
							                                    
							                                    if(Bujia_N == "Si")
							                                       {
							                                       	cout<<"Cambia la bujia"<<endl;
							                                       	cout<<"Si sigue asi lleva el coche a un mecanico por que hay una mala combustion"<<endl;
																   }
							                                    else
							                                       {
							                                       	cout<<"Paso 9:"<<endl;	
							                                        cout<<"La bujia tiene aceite?"<<endl;	
							                                        cout<<"Escriba Si o No"<<endl;
							                                        cin>>Bujia_Ace;
							                                        system("cls");
							                                         
							                                         if(Bujia_Ace == "Si")
							                                            {
							                                               cout<<"Cambia la bujia"<<endl;
							                                       	       cout<<"Si sigue asi lleva el coche a un mecanico por que hay una fuga de aceite del motor"<<endl; 	
																		}
																	 else
																	    {
																	        cout<<"Paso 10:"<<endl;	
							                                                cout<<"La bujia tiene agua?"<<endl;	
							                                                cout<<"Escriba Si o No:"<<endl;
							                                                cin>>Bujia_Agu;
							                                                system("cls");
							                                         
							                                               if(Bujia_Agu == "Si")
							                                                    {
							                                                        cout<<"Cambia la bujia"<<endl;
							                                       	                cout<<"Si sigue asi lleva el coche a un mecanico por que hay una fuga de anticongelante"<<endl; 	
																		        }
																	        else
																	            {
																	      	        cout<<"Paso 11:"<<endl;	
							                                                        cout<<"La bujia tiene desgaste?"<<endl;	
							                                                        cout<<"Escriba Si o No:"<<endl;
							                                                        cin>>Bujia_Des;
							                                                        system("cls");
							                                         
							                                                        if(Bujia_Des == "Si")
							                                                            {
							                                                                cout<<"Cambia la bujia"<<endl;
							                                       	                        cout<<"Si sigue asi lleva el coche a un mecanico por que hay un problema en el motor"<<endl; 	
																		                }
																	                else
																	                    {
																	      	                cout<<"Paso 12:"<<endl;	
							                                                                cout<<"La bujia tiene de color crema o color cafe?"<<endl;	
							                                                                cout<<"Escriba Si o No"<<endl;
							                                                                cin>>Bujia_Crem;
							                                                                system("cls");
							                                         
							                                                                if(Bujia_Crem == "Si")
							                                                                   {
							                                       	                                cout<<"Si sigue asi lleva el coche a un mecanico"<<endl; 	
																	                         	}
																	                        else
																	                            {
																	      	                        cout<<"Cambia la bujia"<<endl;
							                                       	                                cout<<"Si sigue asi lleva el coche a un mecanico"<<endl; 
																		                        }	
																		                }	
																		        }		
																		}	
																   }
													        }
															   
														else 
														    {
														     cout<<"LLevalo con un mecanico"<<endl;	
														    }	   
													}
										        
												 else
												    {
												      cout<<"Agrege Agua"<<endl;	
													}	
											   }
									    	
											else
											   {
											   	cout<<"Agrege Refigerante"<<endl;
											   }
											}
									    	
										
										else
										   {
											cout<<"Agrege Aceite"<<endl;
										   }
							        }
						        }
						        
						  	else
						  	    {
							     cout<<"Necesitas hacerle un cambio de bateria al coche"<<endl;
							    }
						  }
						  
					else
					     {
					        cout<<"Paso 5:"<<endl;
						    cout<<"Se vacia extremadamnete rapido el tanque de gasolina"<<endl;
						    cout<<"Escriba Si o No:"<<endl;
						    cin>>Vacia;
						    system("cls");
						   
						   if(Vacia == "Si")
						   {
						   	    cout<<"Paso 6:"<<endl;
						        cout<<"Te llega a un olor de gasolina"<<endl;
						        cout<<"Escriba Si o No"<<endl;
						        cin>>olor;
						        system("cls");
						        
						        if(olor == "Si")
						        {
						            cout<<"Posiblemente una manguera o tanque de combustible tenga una fuga"<<endl;
								}
								
								else
								{
								    cout<<"Es posible que la bomba de combustible haya dejado de funcionar"<<endl;
									cout<<"Levalo con un mecanico"<<endl;	
								}
						      }
						   
						   else
						      {
						   	        cout<<"Levalo con un mecanico"<<endl;
						      }
					     }	  
		         }
		   
		   else{
		    	cout<<"Su coche necesita combustible, depositele combustible"<<endl;
		        }   
	   }	
	
  return 0;
}
