/* speed.exe 008168b1 FUN_008168b1; analysis pseudocode, not buildable source.
 */

void FUN_008168b1(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar4 = 8;
  do {
    uVar6 = *param_1;
    uVar1 = *param_2;
    uVar3 = (ushort)(((uint7)(byte)((ulonglong)uVar6 >> 0x18) << 0x30) >> 0x28);
    uVar2 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar5 = psraw(CONCAT26((uVar3 >> 8) + (uVar2 >> 8),
                           CONCAT24((short)CONCAT21(uVar3,(char)((ulonglong)uVar6 >> 0x10)) +
                                    (short)CONCAT21(uVar2,(char)((ulonglong)uVar1 >> 0x10)),
                                    CONCAT22((ushort)(byte)((ulonglong)uVar6 >> 8) +
                                             (ushort)(byte)((ulonglong)uVar1 >> 8),
                                             (ushort)(byte)uVar6 + ((ushort)uVar1 & 0xff)))),1);
    *param_3 = uVar5;
    uVar6 = psraw(CONCAT26((ushort)(byte)((ulonglong)uVar6 >> 0x38) +
                           (ushort)(byte)((ulonglong)uVar1 >> 0x38),
                           CONCAT24((ushort)(byte)((ulonglong)uVar6 >> 0x30) +
                                    (ushort)(byte)((ulonglong)uVar1 >> 0x30),
                                    CONCAT22((ushort)(byte)((ulonglong)uVar6 >> 0x28) +
                                             (ushort)(byte)((ulonglong)uVar1 >> 0x28),
                                             (ushort)(byte)((ulonglong)uVar6 >> 0x20) +
                                             (ushort)(byte)((ulonglong)uVar1 >> 0x20)))),1);
    param_1 = (undefined8 *)((int)param_1 + param_4);
    param_2 = (undefined8 *)((int)param_2 + param_4);
    param_3[1] = uVar6;
    iVar4 = iVar4 + -1;
    param_3 = param_3 + 2;
  } while (iVar4 != 0);
  return;
}

