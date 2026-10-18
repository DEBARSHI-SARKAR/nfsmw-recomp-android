/* speed.exe 00569bf0 FUN_00569bf0; analysis pseudocode, not buildable source.
 * calls 007e88f0 FUN_007e88f0
 */

void __thiscall FUN_00569bf0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14) + param_1;
  iVar1 = (param_2 & 0xffff) - 0x20;
  iVar2 = (-(uint)((*(uint *)(param_1 + 0xc) & 0x40000) != 0) & 4) + 0xc;
  if (((int)(uint)*(ushort *)(param_1 + 10) <= iVar1) ||
     (*(short *)(iVar1 * iVar2 + iVar3) != (short)param_2)) {
    FUN_007e88f0(param_2,iVar3,(uint)*(ushort *)(param_1 + 10),iVar2);
  }
  return;
}

