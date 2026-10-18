/* speed.exe 0081a980 FUN_0081a980; analysis pseudocode, not buildable source.
 * calls 008196e8 FUN_008196e8
 * calls 0081f86b FUN_0081f86b
 * calls 0081bcd9 FUN_0081bcd9
 * calls 008317de FUN_008317de
 * calls 0081eae9 FUN_0081eae9
 * calls 0081bccb FUN_0081bccb
 * calls 00819648 FUN_00819648
 */

undefined4 __thiscall FUN_0081a980(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (DAT_009c2188 == '\0') {
    return 0xfffffff6;
  }
  if (DAT_009c1c14 != (code *)0x0) {
    (*DAT_009c1c14)(param_1);
  }
  FUN_0081bccb();
  puVar1 = DAT_009c1bec;
  do {
    if (puVar1 + -0x14 == (undefined4 *)0x0) {
      uVar6 = 0xfffffff8;
LAB_0081a9c2:
      FUN_0081bcd9();
      return uVar6;
    }
    if (param_2 == puVar1[-5]) {
      iVar7 = 0;
      iVar5 = puVar1[-0xd] + (int)(puVar1 + -0x14);
      if (*(short *)((int)puVar1 + -0x46) != 0) {
        do {
          FUN_008317de(iVar5 + 4,iVar5 + 0xc);
          puVar3 = *(undefined4 **)(iVar5 + 0x38);
          while (puVar3 != (undefined4 *)0x0) {
            puVar2 = (undefined4 *)*puVar3;
            iVar4 = *(int *)(iVar5 + 0x34) + (int)puVar3;
            *(undefined4 *)(iVar4 + 0xc) = 1;
            FUN_008196e8(iVar4);
            puVar3 = puVar2;
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + 0x3c + ((uint)*(byte *)(iVar5 + 0x27) + (uint)*(byte *)(iVar5 + 0x24)) * 4
          ;
        } while (iVar7 < (int)(uint)*(ushort *)((int)puVar1 + -0x46));
      }
      uVar6 = 0;
      if (puVar1[-2] != 0) {
        FUN_0081eae9(puVar1[-2]);
      }
      if (-1 < (int)puVar1[-4]) {
        FUN_0081f86b(puVar1[-4]);
      }
      if (-1 < (int)puVar1[-3]) {
        FUN_0081f86b(puVar1[-3]);
      }
      FUN_00819648(puVar1);
      if (DAT_009c1bec == (undefined4 *)0x0) {
        FUN_00819648(&DAT_009c1bf4);
      }
      goto LAB_0081a9c2;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

