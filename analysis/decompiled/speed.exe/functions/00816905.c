/* speed.exe 00816905 FUN_00816905; analysis pseudocode, not buildable source.
 */

void FUN_00816905(undefined8 *param_1,ulonglong *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    uVar1 = *param_1;
    *param_2 = (ulonglong)
               CONCAT52(CONCAT41((int)(((uint7)CONCAT21((short)(((uint7)(byte)((ulonglong)uVar1 >>
                                                                              0x18) << 0x30) >> 0x28
                                                               ),(char)((ulonglong)uVar1 >> 0x10))
                                       << 0x20) >> 0x18),(char)((ulonglong)uVar1 >> 8)),
                        (ushort)(byte)uVar1);
    param_1 = (undefined8 *)((int)param_1 + param_3);
    param_2[1] = (ulonglong)
                 CONCAT16((char)((ulonglong)uVar1 >> 0x38),
                          (uint6)CONCAT14((char)((ulonglong)uVar1 >> 0x30),
                                          (uint)CONCAT12((char)((ulonglong)uVar1 >> 0x28),
                                                         (ushort)(byte)((ulonglong)uVar1 >> 0x20))))
    ;
    param_2 = param_2 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

