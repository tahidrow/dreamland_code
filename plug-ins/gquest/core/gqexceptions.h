/* $Id: gqexceptions.h,v 1.1.2.1.6.1 2007/09/11 00:34:02 rufina Exp $
 *
 * ruffina, 2003
 */

#ifndef GQEXCEPTIONS_H
#define GQEXCEPTIONS_H

#include "exception.h"
#include "dlstring.h"

class BadMobileBehaviorException : public Exception {
public:
    virtual ~BadMobileBehaviorException( ) ;

    BadMobileBehaviorException( int vnum )
                : Exception( "Invalid behavior for mobile #" + DLString( vnum ) )
    {
    }
};

class BadObjectBehaviorException : public Exception {
public:
    virtual ~BadObjectBehaviorException( ) ;

    BadObjectBehaviorException( int vnum )
                : Exception( "Invalid behavior for object #" + DLString( vnum ) )
    {
    }
};

class MobileNotFoundException : public Exception {
public:
        virtual ~MobileNotFoundException( ) ;
        MobileNotFoundException( int vnum ) 
                : Exception( "Mob Vnum #" + DLString( vnum ) + " not found." )
        {        
        }
        
};

class ObjectNotFoundException : public Exception {
public:
        virtual ~ObjectNotFoundException( ) ;
        ObjectNotFoundException( int vnum ) 
                : Exception( "Obj Vnum #" + DLString( vnum ) + " not found." )
        {        
        }
        
};

class GQAlreadyRunningException : public Exception {
public:
        virtual ~GQAlreadyRunningException( ) ;
        GQAlreadyRunningException( DLString id ) 
                : Exception( "Quest \"" + id + "\" is already running." )
        {        
        }
};

class GQRuntimeException: public Exception {
public:
        virtual ~GQRuntimeException( ) ;
        GQRuntimeException( DLString id ) 
                : Exception( "GQ runtime exception: " + id )
        {        
        }
};

class GQCannotStartException : public Exception {
public:
        virtual ~GQCannotStartException( ) ;
        GQCannotStartException( int min, int max ) 
                : Exception( "GQuest for levels " + DLString(min) + " - " 
                             + DLString(max) + " cannot be started." )
        {        
        }
        
        GQCannotStartException( DLString reason ) 
                : Exception( "GQuest cannot be started: " + reason )
        {        
        }
};

#endif
