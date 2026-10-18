/* speed.exe 006f4660 FUN_006f4660; analysis pseudocode, not buildable source.
 * calls 006f44e0 FUN_006f44e0
 * calls 00652ad0 _malloc
 * calls 006eea40 FUN_006eea40
 */

void __thiscall
FUN_006f4660(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087eb14;
  local_c = ExceptionList;
  if (param_2 != DAT_0091ddbc) {
    iVar4 = param_1[0x16];
    while( true ) {
      if (iVar4 == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)(iVar4 + -0x18);
      }
      if (param_1 + 0x16 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = param_1 + 0x10;
      }
      if (piVar2 == piVar6) break;
      ExceptionList = &local_c;
      if (piVar2[0x16] == param_2) goto LAB_006f4722;
      iVar4 = piVar2[6];
    }
    ExceptionList = &local_c;
    puVar3 = _malloc(0x5c);
    local_4 = 0;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      iVar4 = (**(code **)(*param_1 + 0x44))();
      uVar1 = *(undefined4 *)(iVar4 + 4);
      uVar5 = (**(code **)(*param_1 + 0xc))();
      FUN_006eea40(uVar5,uVar1);
      *puVar3 = &PTR_FUN_008b05e4;
      puVar3[0x16] = param_2;
    }
    if (puVar3 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = puVar3 + 6;
    }
    puVar3 = (undefined4 *)param_1[0x17];
    *puVar3 = piVar2;
    param_1[0x17] = (int)piVar2;
    piVar2[1] = (int)puVar3;
    *piVar2 = (int)(param_1 + 0x16);
LAB_006f4722:
    local_4 = 0xffffffff;
    FUN_006f44e0(param_3,param_4,param_5,0,param_6,0);
  }
  ExceptionList = local_c;
  return;
}

