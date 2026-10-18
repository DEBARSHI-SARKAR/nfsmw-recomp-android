/* speed.exe 00734fe0 FUN_00734fe0; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_00734fe0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1144);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((((iVar1 != 4) && (iVar1 != 6)) && (iVar1 != 0)) &&
     (((iVar1 != 5 && (iVar1 != 3)) && ((DAT_009b0fa0 < 6 || (1 < iVar1)))))) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}

