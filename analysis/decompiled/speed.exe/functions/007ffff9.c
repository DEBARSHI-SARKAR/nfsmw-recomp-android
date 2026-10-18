/* speed.exe 007ffff9 FUN_007ffff9; analysis pseudocode, not buildable source.
 * calls 007c9790 _fopen
 * calls 007cb290 _fprintf
 * calls 007c94f0 _fclose
 */

void FUN_007ffff9(uint param_1)

{
  short *psVar1;
  int iVar2;
  FILE *_File;
  int iVar3;
  uint local_8;
  
  iVar2 = param_1;
  _File = _fopen("modes.txt","a");
  _fprintf(_File,"Frame %d\n\n",DAT_009c1ab0);
  local_8 = 3;
  if (3 < *(int *)(param_1 + 0x22c) - 3U) {
    do {
      if (*(int *)(iVar2 + 0x1dc) == 1) {
        iVar3 = *(int *)(iVar2 + 0x230);
        param_1 = 3;
        if (3 < iVar3 - 3U) {
          do {
            _fprintf(_File,"%d",(int)*(char *)(iVar3 * local_8 + *(int *)(iVar2 + 0x6f0) + param_1))
            ;
            iVar3 = *(int *)(iVar2 + 0x230);
            param_1 = param_1 + 1;
          } while (param_1 < iVar3 - 3U);
        }
        _fprintf(_File,"   ");
      }
      iVar3 = *(int *)(iVar2 + 0x230);
      param_1 = 3;
      if (3 < iVar3 - 3U) {
        do {
          _fprintf(_File,"%d",(int)*(char *)(iVar3 * local_8 + *(int *)(iVar2 + 0x6f4) + param_1));
          iVar3 = *(int *)(iVar2 + 0x230);
          param_1 = param_1 + 1;
        } while (param_1 < iVar3 - 3U);
      }
      _fprintf(_File,"   ");
      param_1 = 3;
      if (3 < *(int *)(iVar2 + 0x230) - 3U) {
        do {
          psVar1 = (short *)(*(int *)(iVar2 + 0x6f8) +
                            (*(int *)(iVar2 + 0x230) * local_8 + param_1) * 4);
          _fprintf(_File,"%3d:%-3d",(int)*psVar1,(int)psVar1[1]);
          param_1 = param_1 + 1;
        } while (param_1 < *(int *)(iVar2 + 0x230) - 3U);
      }
      _fprintf(_File,"\n");
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(iVar2 + 0x22c) - 3U);
  }
  _fprintf(_File,"\n");
  _fprintf(_File,"\n");
  _fclose(_File);
  DAT_009c1ab0 = DAT_009c1ab0 + 1;
  return;
}

