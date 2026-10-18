/* speed.exe 007ffd11 FUN_007ffd11; analysis pseudocode, not buildable source.
 * calls 007cb730 _fwrite
 * calls 007c9790 _fopen
 * calls 007c6100 _sprintf
 * calls 007c94f0 _fclose
 */

void FUN_007ffd11(undefined4 param_1,undefined4 param_2,void *param_3,size_t param_4)

{
  FILE *_File;
  char local_104 [256];
  
  _sprintf(local_104,"%s%04d.raw",param_1,param_2);
  _File = _fopen(local_104,"wb");
  _fwrite(param_3,param_4,1,_File);
  _fclose(_File);
  return;
}

