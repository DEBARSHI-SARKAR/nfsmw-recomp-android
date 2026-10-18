/* speed.exe 007e3f40 ___buffer_overrun; analysis pseudocode, not buildable source.
 * calls 007e3cf0 ___security_error_handler
 */

/* Library Function - Single Match
    ___buffer_overrun
   
   Library: Visual Studio 2003 Debug */

void ___buffer_overrun(void)

{
  ___security_error_handler(1,0);
  return;
}

