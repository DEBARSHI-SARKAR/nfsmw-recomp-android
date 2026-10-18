/* speed.exe 007907d0 FUN_007907d0; analysis pseudocode, not buildable source.
 * calls 0078be70 FUN_0078be70
 * calls 0083a670 FUN_0083a670
 * calls 0083b8a0 FUN_0083b8a0
 */

undefined4 FUN_007907d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [4];
  
  iVar1 = FUN_0078be70(0);
  if (((-1 < param_1) && (param_1 < 4)) && (iVar1 == 0)) {
    return 0;
  }
  uVar2 = FUN_0083a670(iVar1 + 0x1c,&DAT_008b6cb8,local_10,0x10,&DAT_0089b350);
  FUN_0083b8a0(uVar2);
  return local_10[param_1];
}

