void output_to_file( const string & name, const double y[], const int size )
{
	string outfilename = "out.txt";
	ofstream out;
	out.open( outfilename.c_str(), ios::app );
	if ( out.fail() )
	{
		cout << "Output file could not be opened.  Exitting." << endl;
		exit(1);
	}
	out << name << endl;
	for ( int i=0; i<=size; i++ )
		out << y[i] << endl;
	out << endl << endl;
        
	out.close();

    return;
}