/*
 * Site: restbed.corvusoft.co.uk
 * Author: Ben Crowhurst
 *
 * Copyright (c) 2013 Restbed Core Development Team and Community Contributors
 *
 * This file is part of Restbed.
 *
 * Restbed is free software: you can redistribute it and/or modify
 * it under the terms of the Lesser GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Restbed is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * Lesser GNU General Public License for more details.
 *
 * You should have received a copy of the Lesser GNU General Public License
 * along with Restbed.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _RESTBED_DETAIL_HELPER_ISTREAM_H
#define _RESTBED_DETAIL_HELPER_ISTREAM_H 1

//System Includes
#include <istream>

//Project Includes

//External Includes

//System Namespaces

//Project Namespaces

//External Namespaces

namespace restbed
{
	//Forward Declarations

    namespace detail
    {
    	//Forward Declarations

        namespace helpers
        {
            //Forward Declarations
            
            class IStream
            {
                public:
                    //Friends
                    
                    //Definitions

                    //Constructors
                    
                    //Functionality
			        static char reverse_peek( std::istream& socket )
			        {
			            socket.unget( );

			            char previous_byte = socket.get( );

			            return previous_byte;
			        }

                    //Getters
                    
                    //Setters
                    
                    //Operators
                    
                    //Properties
                
                protected:
                    //Friends
                    
                    //Definitions
                    
                    //Constructors
                    
                    //Functionality
                    
                    //Getters
                    
                    //Setters
                    
                    //Operators
                    
                    //Properties
                    
                private:
                    //Friends
                    
                    //Definitions
                    
                    //Constructors
                    IStream( void ) = delete;
                    
                    IStream( const IStream& original ) = delete;
                    
                    virtual ~IStream( void ) = delete;

                    //Functionality
                    
                    //Getters
                    
                    //Setters
                    
                    //Operators
                    IStream& operator =( const IStream& rhs ) = delete;

                    //Properties
            };
        }
    }
}

#endif  /* _RESTBED_DETAIL_HELPER_ISTREAM_H */
