/* speed.exe 008191c8 FUN_008191c8; analysis pseudocode, not buildable source.
 */

void FUN_008191c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = *param_1;
  uVar1 = *param_2;
  auVar4._2_2_ = (short)((ulonglong)uVar3 >> 0x10) * (short)((ulonglong)uVar1 >> 0x10);
  auVar4._4_2_ = (short)((ulonglong)uVar3 >> 0x20) * (short)((ulonglong)uVar1 >> 0x20);
  auVar4._6_2_ = (short)((ulonglong)uVar3 >> 0x30) * (short)((ulonglong)uVar1 >> 0x30);
  auVar4._0_2_ = (short)uVar3 * (short)uVar1 + 0xf;
  auVar4._8_8_ = 0;
  auVar4 = psraw(auVar4,5);
  uVar2 = CONCAT22(auVar4._0_2_,auVar4._0_2_);
  uVar3 = CONCAT44(uVar2,uVar2);
  *param_3 = uVar3;
  param_3[1] = uVar3;
  param_3[2] = uVar3;
  param_3[3] = uVar3;
  param_3[4] = uVar3;
  param_3[5] = uVar3;
  param_3[6] = uVar3;
  param_3[7] = uVar3;
  param_3[8] = uVar3;
  param_3[9] = uVar3;
  param_3[10] = uVar3;
  param_3[0xb] = uVar3;
  param_3[0xc] = uVar3;
  param_3[0xd] = uVar3;
  param_3[0xe] = uVar3;
  param_3[0xf] = uVar3;
  return;
}

