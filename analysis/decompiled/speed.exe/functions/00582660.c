/* speed.exe 00582660 FUN_00582660; analysis pseudocode, not buildable source.
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 00465f70 FUN_00465f70
 * calls 004662e0 FUN_004662e0
 * calls 006c0a30 FUN_006c0a30
 * calls 0045f2c0 FUN_0045f2c0
 */

int * __thiscall
FUN_00582660(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int *param_11)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087227b;
  local_c = ExceptionList;
  if (*(int *)(DAT_0091cfa0 + 0x18) == *(int *)(DAT_0091cfa0 + 0x2c)) {
    ExceptionList = &local_c;
    if (DAT_0091cfa4 == 0) {
      ExceptionList = &local_c;
      DAT_0091cfa4 = FUN_004662e0(0xc0,0x200,"FERenderEPolySlotPoolOverflow",0);
      *(uint *)(DAT_0091cfa4 + 0x14) = *(uint *)(DAT_0091cfa4 + 0x14) & 0xfffffffb;
    }
    piVar5 = (int *)FUN_00465f70();
  }
  else {
    ExceptionList = &local_c;
    piVar5 = (int *)FUN_0045f2c0();
  }
  local_4 = 0;
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    FUN_006c0a30();
    piVar5[0x2d] = 0;
  }
  piVar5[0x2c] = 0;
  puVar3 = *(undefined4 **)(param_1 + 0x1c);
  *puVar3 = piVar5;
  *(int **)(param_1 + 0x1c) = piVar5;
  piVar5[1] = (int)puVar3;
  *piVar5 = param_1 + 0x18;
  piVar1 = piVar5 + 4;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *piVar1 = param_2;
  piVar2 = piVar5 + 8;
  param_1 = param_1 + 0x30;
  piVar5[5] = param_3;
  *piVar2 = param_4;
  piVar5[9] = param_3;
  piVar5[0xc] = param_4;
  local_4 = 0xffffffff;
  piVar5[6] = param_6;
  piVar5[10] = param_6;
  piVar5[0xd] = param_5;
  piVar5[0xe] = param_6;
  piVar5[0x10] = param_2;
  piVar5[0x11] = param_5;
  piVar5[0x12] = param_6;
  thunk_FUN_006bd940(piVar1,param_1,piVar1);
  thunk_FUN_006bd940(piVar2,param_1,piVar2);
  thunk_FUN_006bd940(piVar5 + 0xc,param_1,piVar5 + 0xc);
  thunk_FUN_006bd940(piVar5 + 0x10,param_1,piVar5 + 0x10);
  piVar5[10] = param_6;
  piVar5[0xe] = param_6;
  piVar5[6] = param_6;
  piVar5[0x12] = param_6;
  piVar5[0x14] = param_7;
  piVar5[0x15] = param_8;
  piVar5[0x16] = param_9;
  piVar5[0x18] = param_9;
  piVar5[0x17] = param_8;
  piVar5[0x1b] = param_10;
  piVar5[0x19] = param_10;
  piVar5[0x1a] = param_7;
  piVar5[0x24] = *param_11;
  piVar5[0x25] = param_11[1];
  piVar5[0x26] = param_11[2];
  iVar4 = param_11[3];
  *(undefined1 *)((int)piVar5 + 0xa1) = 1;
  *(undefined1 *)(piVar5 + 0x28) = 1;
  piVar5[0x27] = iVar4;
  ExceptionList = local_c;
  return piVar5;
}

