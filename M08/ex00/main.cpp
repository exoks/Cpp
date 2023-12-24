//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/24 16:23:53 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/24 16:23:53 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)
 
# include "easyfind.hpp"

//====< main >==================================================================
int	main(void)
{
	std::vector<int> v;

	v.push_back(0);
	v.push_back(3);
	v.push_back(2);
	v.push_back(7);

	try
	{
		easyfind(v, 3);
		easyfind(v, 9);
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}
