
#include <iostream>

#include <gflags/gflags.h>
#include <gflags/gflags_completions.h>


DEFINE_bool( ditch_iphone, true, "Should I ditch my iphone for an android phone?" );
DEFINE_string( options, "hero,droidx,droid2,galaxy",
               "What are my phone options?" );

int main( int argc, char** argv )
{
  google::SetUsageMessage( "Should I get rid of my iPhone 3G? That is the question." );
  google::ParseCommandLineFlags( &argc, &argv, true );
  google::HandleCommandLineCompletions();
  if( FLAGS_ditch_iphone )
    {
    std::cout << "Get rid of that iPhone and get one of these: " << FLAGS_options 
              << std::endl;
    }
  else
    {
    std::cout << "KEEP IT!" << std::endl;
    }
}
