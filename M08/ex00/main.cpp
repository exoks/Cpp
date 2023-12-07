//               ################                                                         
//             ####################                                                       
//           ########################                                                     
//          #############+########### #                                                   
//          ######-..        .+########          < main.cpp >                             
//          ####-..            ..+####                                                    
//          ###-...             .-####                                                    
//          ###...              ..+##      Student: oezzaou <oezzaou@student.1337.ma>     
//           #-.++###.      -###+..##                                                     
//           #....  ...   .-.  ....##         Created: 2023/12/07 17:49:55 by oussama     
//        --.#.-#+## -..  -+ ##-#-.-...       Updated: 2023/12/07 17:55:24 by oussama     
//         ---....... ..  ........... -                                                   
//         -+#..     ..   .       .+-.                                                    
//          .--.     .     .     ..+.                                                     
//            -..    .+--.-.     ...                                                      
//            +.... .-+#.#+.    ..-                                                       
//             +...#####-++###-..-                                                        
//             #---..----+--.---+##                                                       
//           ###-+--.... ....--+#####                                                     
//     ##########--#-.......-#-###########        Made By Oussama Ezzaou (OEZZAOU) :)     

# include "easyfind.hpp"

//====< main >==================================================================
int	main(void)
{
	std::vector<int> v;

	v.push_back(0);
	v.push_back(3);
	v.push_back(2);
	v.push_back(7);

	easyfind(v, 0);
	return (EXIT_SUCCESS);
}
