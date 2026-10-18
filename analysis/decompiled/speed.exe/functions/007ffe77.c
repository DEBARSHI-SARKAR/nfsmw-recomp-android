/* speed.exe 007ffe77 FUN_007ffe77; analysis pseudocode, not buildable source.
 * calls 007cb730 _fwrite
 * calls 007c9790 _fopen
 * calls 007c94f0 _fclose
 */

void FUN_007ffe77(int param_1)

{
  FILE *_File;
  
  _File = _fopen("test.raw","ab");
  _fwrite(*(void **)(param_1 + 0x254),*(int *)(param_1 + 0x208) + *(int *)(param_1 + 0x20c) * 2,1,
          _File);
  _fclose(_File);
  return;
}

