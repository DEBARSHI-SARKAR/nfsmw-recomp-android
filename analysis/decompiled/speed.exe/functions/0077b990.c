/* speed.exe 0077b990 FUN_0077b990; analysis pseudocode, not buildable source.
 * calls 0076e0d0 FUN_0076e0d0
 */

void FUN_0077b990(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = param_1 * 0x16 + DAT_009b38c0;
  FUN_0076e0d0((uint)*(ushort *)(param_1 * 0x16 + DAT_009b38c0) * 0x20 + DAT_009b38bc,
               (uint)*(ushort *)(iVar1 + 2) * 0x20 + DAT_009b38bc,iVar1,param_2,param_3);
  return;
}

