/* speed.exe 006fbda0 FUN_006fbda0; analysis pseudocode, not buildable source.
 * calls 006f0080 FUN_006f0080
 * calls 006f6ae0 FUN_006f6ae0
 * calls 006fa4d0 FUN_006fa4d0
 */

void __thiscall FUN_006fbda0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = param_3;
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  FUN_006f0080(&param_3,uVar2,iVar1,param_3,param_2);
  if (param_3 == iVar1) {
    local_c = param_2;
    local_10 = iVar3;
    local_8 = param_4;
    local_4 = 0;
    FUN_006f6ae0(&param_2,uVar2,iVar1,&local_10,0);
    FUN_006fa4d0(param_2,1,&local_10);
  }
  return;
}

