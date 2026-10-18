/* speed.exe 0081693a FUN_0081693a; analysis pseudocode, not buildable source.
 */

void FUN_0081693a(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  int iVar5;
  
  iVar5 = 8;
  do {
    uVar1 = *param_1;
    uVar2 = *param_2;
    uVar4 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar3 = param_2[1];
    *param_2 = CONCAT26((uVar4 >> 8) - (short)((ulonglong)uVar2 >> 0x30),
                        CONCAT24((short)CONCAT21(uVar4,(char)((ulonglong)uVar1 >> 0x10)) -
                                 (short)((ulonglong)uVar2 >> 0x20),
                                 CONCAT22((ushort)(byte)((ulonglong)uVar1 >> 8) -
                                          (short)((ulonglong)uVar2 >> 0x10),
                                          (ushort)(byte)uVar1 - (short)uVar2)));
    param_1 = (undefined8 *)((int)param_1 + param_3);
    param_2[1] = CONCAT26((ushort)(byte)((ulonglong)uVar1 >> 0x38) -
                          (short)((ulonglong)uVar3 >> 0x30),
                          CONCAT24((ushort)(byte)((ulonglong)uVar1 >> 0x30) -
                                   (short)((ulonglong)uVar3 >> 0x20),
                                   CONCAT22((ushort)(byte)((ulonglong)uVar1 >> 0x28) -
                                            (short)((ulonglong)uVar3 >> 0x10),
                                            (ushort)(byte)((ulonglong)uVar1 >> 0x20) - (short)uVar3)
                                  ));
    param_2 = param_2 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

