/* speed.exe 007ffc65 FUN_007ffc65; analysis pseudocode, not buildable source.
 * calls 007cb730 _fwrite
 * calls 007c9790 _fopen
 * calls 007c6100 _sprintf
 * calls 007c94f0 _fclose
 */

void FUN_007ffc65(int param_1,void *param_2,undefined4 param_3)

{
  FILE *_File;
  char local_104 [256];
  
  _sprintf(local_104,"y%04d.raw",param_3);
  _File = _fopen(local_104,"wb");
  _fwrite(param_2,*(int *)(param_1 + 0x208) + *(int *)(param_1 + 0x20c) * 2,1,_File);
  _fclose(_File);
  return;
}

