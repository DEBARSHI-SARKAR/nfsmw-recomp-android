/* speed.exe 00552440 FUN_00552440; analysis pseudocode, not buildable source.
 * calls 00593560 FUN_00593560
 * calls 005dda70 FUN_005dda70
 * calls 0051f3c0 FUN_0051f3c0
 * calls 0051f310 FUN_0051f310
 * calls 00588250 FUN_00588250
 * calls 005481c0 FUN_005481c0
 * calls 005e9d40 FUN_005e9d40
 * calls 005e46d0 FUN_005e46d0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00593880 FUN_00593880
 * calls 005e4770 FUN_005e4770
 */

void __fastcall FUN_00552440(int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  FUN_00593880();
  for (iVar1 = FUN_005e46d0(0,DAT_0091ca3c); iVar1 != 0; iVar1 = FUN_005dda70(iVar1,0,DAT_0091ca3c))
  {
    FUN_0051f310(iVar1);
    if (*(char *)(iVar1 + 8) == '\x01') {
      iVar2 = FUN_0045d3a0(0);
      iVar2 = FUN_00588250(iVar2 + -1);
      *(undefined1 *)(iVar2 + 0x16) = 1;
    }
    if (*(char *)(iVar1 + 8) == '\x04') {
      iVar2 = FUN_0045d3a0(0);
      iVar2 = FUN_00588250(iVar2 + -1);
      *(undefined1 *)(iVar2 + 0x17) = 1;
    }
  }
  for (pbVar3 = (byte *)FUN_005e9d40(0,DAT_0091ca3c); pbVar3 != (byte *)0x0;
      pbVar3 = (byte *)FUN_005e4770(pbVar3,0,DAT_0091ca3c)) {
    FUN_0051f3c0(pbVar3);
    if ((~*pbVar3 & 1) != 0) {
      iVar1 = FUN_0045d3a0(0);
      iVar1 = FUN_00588250(iVar1 + -1);
      *(undefined1 *)(iVar1 + 0x16) = 1;
    }
    if ((*pbVar3 >> 2 & 1) != 0) {
      iVar1 = FUN_0045d3a0(0);
      iVar1 = FUN_00588250(iVar1 + -1);
      *(undefined1 *)(iVar1 + 0x17) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x54) = 0xb5117fde;
  FUN_00593560(0);
  FUN_005481c0();
                    /* WARNING: Could not recover jumptable at 0x00552565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
  return;
}

