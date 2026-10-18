/* speed.exe 007e3f60 ___set_buffer_overrun_handler; analysis pseudocode, not buildable source.
 * calls 007e3f20 __set_security_error_handler
 */

/* Library Function - Single Match
    ___set_buffer_overrun_handler
   
   Library: Visual Studio 2003 Debug */

void ___set_buffer_overrun_handler(undefined4 param_1)

{
  __set_security_error_handler(param_1);
  return;
}

