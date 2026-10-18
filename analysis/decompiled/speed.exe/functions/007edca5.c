/* speed.exe 007edca5 FUN_007edca5; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 007e6630 __stricmp
 * calls 007f0df9 FUN_007f0df9
 * calls 007c97c0 FUN_007c97c0
 */

undefined4 * FUN_007edca5(char *param_1)

{
  int iVar1;
  char *_Str1;
  undefined4 *puVar2;
  char *_Str2;
  char local_14 [16];
  
  iVar1 = FUN_007c97c0(param_1,0x3a);
  if (iVar1 == 0) {
    if ((*param_1 != '/') && (*param_1 != '\\')) {
      return *(undefined4 **)(DAT_009bb13c + 0x98);
    }
    FUN_007f0df9(local_14,0x10);
    iVar1 = FUN_007c97c0(**(undefined4 **)(DAT_009bb13c + 0x88),0x3a);
    param_1 = (char *)**(int **)(DAT_009bb13c + 0x88);
    iVar1 = iVar1 - (int)param_1;
  }
  else {
    FUN_007f0df9(local_14,0x10);
    iVar1 = FUN_007c97c0(param_1,0x3a);
    iVar1 = iVar1 - (int)param_1;
  }
  _strncpy(local_14,param_1,iVar1 + 1);
  puVar2 = *(undefined4 **)(DAT_009bb13c + 0x7c);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    _Str2 = local_14;
    _Str1 = (char *)(**(code **)(*(int *)puVar2[0x20] + 0x30))();
    iVar1 = __stricmp(_Str1,_Str2);
    if (iVar1 == 0) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return puVar2;
}

