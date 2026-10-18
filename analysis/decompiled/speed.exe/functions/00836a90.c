/* speed.exe 00836a90 FUN_00836a90; analysis pseudocode, not buildable source.
 * calls 008366b0 FUN_008366b0
 */

void FUN_00836a90(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  if (iVar1 < 0x67696e77) {
    if (iVar1 != 0x67696e76) {
      if (iVar1 < 0x64656c76) {
        if ((iVar1 != 0x64656c75) && (iVar1 != 0x61646475)) {
          if (iVar1 != 0x62726463) goto LAB_00836af0;
          goto LAB_00836abf;
        }
      }
      else if (iVar1 != 0x65707374) goto LAB_00836af0;
    }
LAB_00836b25:
    if (param_2[2] == 0x66756c6c) {
      param_2[2] = -5;
    }
  }
  else {
    if (iVar1 == 0x696e7674) goto LAB_00836b25;
    if (iVar1 != 0x73656e64) {
      if (iVar1 != 0x75736572) goto LAB_00836af0;
      goto LAB_00836b25;
    }
LAB_00836abf:
    if (param_2[2] == 0x66756c6c) {
      param_2[2] = -5;
    }
    if (*(int *)(param_3 + 0xbc) == 0) goto LAB_00836af0;
  }
  iVar1 = param_2[2];
  if (iVar1 == -1) {
    iVar1 = -999;
  }
  *(int *)(param_3 + 0x10) = iVar1;
LAB_00836af0:
  if ((param_3 != 0) && (*(int *)(param_3 + 0x2c) != 0)) {
    uVar2 = FUN_008366b0(*param_2,param_2[2],*(undefined4 *)(param_3 + 0x28));
    (*(code *)((ulonglong)uVar2 >> 0x20))(param_3,(int)uVar2);
    *(undefined4 *)(param_3 + 0x2c) = 0;
  }
  return;
}

