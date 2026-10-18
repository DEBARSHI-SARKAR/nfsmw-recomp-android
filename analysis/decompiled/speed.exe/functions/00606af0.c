/* speed.exe 00606af0 FUN_00606af0; analysis pseudocode, not buildable source.
 * calls 00613970 FUN_00613970
 */

void FUN_00606af0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = FUN_00613970(param_1,iVar1,(uint)*(ushort *)(param_1 + 0x2c) * 0x18,param_2 * 0x18,0xb);
  *(int *)(param_1 + 0x14) = iVar2 + ((*(int *)(param_1 + 0x14) - iVar1) / 0x18) * 0x18;
  *(short *)(param_1 + 0x2c) = (short)param_2;
  *(int *)(param_1 + 0x28) = iVar2;
  *(uint *)(param_1 + 0x24) = iVar2 + (param_2 & 0xffff) * 0x18;
  return;
}

