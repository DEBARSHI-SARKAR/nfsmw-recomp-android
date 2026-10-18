/* speed.exe 007ffdc3 FUN_007ffdc3; analysis pseudocode, not buildable source.
 * calls 007cb730 _fwrite
 * calls 007c9790 _fopen
 * calls 007c94f0 _fclose
 */

void FUN_007ffdc3(char *param_1,void *param_2,int param_3,size_t param_4,int param_5)

{
  FILE *_File;
  
  _File = _fopen(param_1,"ab");
  if (0 < param_5) {
    do {
      _fwrite(param_2,param_4,1,_File);
      param_2 = (void *)((int)param_2 + param_3);
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  _fclose(_File);
  return;
}

