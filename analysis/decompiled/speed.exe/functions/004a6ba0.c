/* speed.exe 004a6ba0 FUN_004a6ba0; analysis pseudocode, not buildable source.
 * calls 0048d7d0 FUN_0048d7d0
 * calls 0049ff90 FUN_0049ff90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a6ba0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined4 *unaff_retaddr;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  iVar4 = DAT_00911800;
  cVar5 = (**(code **)(**(int **)(param_1 + 0x18) + 0x18))();
  if (cVar5 != '\0') {
    uVar1 = *(undefined4 *)(iVar4 + 0x14);
    uVar2 = *(undefined4 *)(iVar4 + 0x18);
    uVar3 = *(undefined4 *)(iVar4 + 0x1c);
    if (*(float *)(param_1 + 0x28) == _DAT_00890968) {
      *unaff_retaddr = *(undefined4 *)(iVar4 + 0x10);
      unaff_retaddr[1] = uVar1;
      unaff_retaddr[2] = uVar2;
      unaff_retaddr[3] = uVar3;
    }
    else {
      FUN_0049ff90(iVar4,0);
      cVar5 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))(uStack_4,iVar4,0);
      if (cVar5 != '\0') {
        FUN_0048d7d0(*(undefined4 *)(param_1 + 0x28),&stack0xffffffc8,&stack0xffffffd8,uStack_c);
        return;
      }
    }
  }
  return;
}

