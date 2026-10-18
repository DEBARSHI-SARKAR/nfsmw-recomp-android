/* speed.exe 00628530 FUN_00628530; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_00628530(uint3 param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (DAT_0091f150 != 0) {
    piVar2 = *(int **)(DAT_0091f150 + 0x218);
    (**(code **)(*piVar2 + 0x10))(piVar2,&LAB_00627ba0,&stack0xffffffff,0x10,(uint)param_1);
    uVar1 = (uint)piVar2 >> 0x18;
  }
  return uVar1;
}

