/* speed.exe 007ffcc0 FUN_007ffcc0; analysis pseudocode, not buildable source.
 * calls 007cb730 _fwrite
 * calls 007c9790 _fopen
 * calls 007c6100 _sprintf
 * calls 007c94f0 _fclose
 */

void FUN_007ffcc0(int param_1,void *param_2,undefined4 param_3)

{
  FILE *_File;
  char local_104 [256];
  
  _sprintf(local_104,"y%d.raw",param_3);
  _File = _fopen(local_104,"wb");
  _fwrite(param_2,*(size_t *)(param_1 + 0x1ec),1,_File);
  _fclose(_File);
  return;
}

