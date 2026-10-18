/* speed.exe 0057ab10 FUN_0057ab10; analysis pseudocode, not buildable source.
 * calls 0056bc60 FUN_0056bc60
 * calls 0051a0a0 FUN_0051a0a0
 * calls 007c4b80 FUN_007c4b80
 * calls 006547a0 FUN_006547a0
 * calls 005d59f0 FUN_005d59f0
 * calls 004647e0 FUN_004647e0
 * calls 00404a70 FUN_00404a70
 * calls 005faa20 FUN_005faa20
 */

undefined4 __thiscall FUN_0057ab10(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [32];
  
  iVar2 = (**(code **)(*param_2 + 0x14))();
  if (*(char *)(iVar2 + 0x10) == '\x04') {
    *(undefined1 *)(param_1 + 0x44) = 0;
    return 0;
  }
  iVar2 = (**(code **)(*param_2 + 0x20))();
  if (iVar2 == 0) {
    return 0;
  }
  piVar3 = (int *)FUN_005d59f0(&LAB_005650b0);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  cVar1 = (**(code **)(*piVar3 + 0xc))();
  if (cVar1 == '\0') {
    iVar2 = 0x32;
    if (((*(int *)(DAT_0091e000 + 0x1968) != 0) && (iVar4 = FUN_005faa20(), iVar4 == 0)) ||
       (iVar4 = FUN_00404a70(), iVar4 == 4)) {
      iVar2 = 0x19;
    }
    iVar4 = *(int *)(param_1 + 0x40);
    if (iVar4 == 0) {
      iVar4 = FUN_007c4b80();
      FUN_0051a0a0(*(float *)(param_1 + 0xd4 + (iVar4 / iVar2) * 4) -
                   *(float *)(param_1 + 0x5c + (iVar4 / iVar2) * 4));
    }
    else {
      iVar5 = FUN_007c4b80();
      FUN_0051a0a0(*(float *)(param_1 + 0x5c + (iVar4 * 0x1e + iVar5 / iVar2) * 4) -
                   *(float *)(param_1 + 0x5c + (iVar5 / iVar2) * 4));
    }
    FUN_006547a0(auStack_30,4);
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar6 = FUN_0056bc60(0x7771a159,auStack_30);
      FUN_004647e0(auStack_20,0x20,"%s\n+%s",uVar6);
      uVar6 = 0xa19bb14c;
    }
    else {
      uVar6 = FUN_0056bc60(0x7771a159,auStack_30);
      FUN_004647e0(auStack_20,0x20,"%s\n-%s",uVar6);
      uVar6 = 0x5230faf6;
    }
    (**(code **)(*piVar3 + 4))(auStack_20,0,uVar6,0,0,3);
    return 1;
  }
  return 0;
}

