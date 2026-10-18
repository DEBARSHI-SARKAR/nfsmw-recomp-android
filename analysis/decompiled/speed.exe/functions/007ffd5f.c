/* speed.exe 007ffd5f FUN_007ffd5f; analysis pseudocode, not buildable source.
 * calls 007cb730 _fwrite
 * calls 007c9790 _fopen
 * calls 007c6100 _sprintf
 * calls 007c94f0 _fclose
 */

void FUN_007ffd5f(undefined4 param_1,undefined4 param_2,void *param_3,int param_4,size_t param_5,
                 int param_6)

{
  FILE *_File;
  char local_104 [256];
  
  _sprintf(local_104,"%s%04d.raw",param_1,param_2);
  _File = _fopen(local_104,"wb");
  if (0 < param_6) {
    do {
      _fwrite(param_3,param_5,1,_File);
      param_3 = (void *)((int)param_3 + param_4);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  _fclose(_File);
  return;
}

