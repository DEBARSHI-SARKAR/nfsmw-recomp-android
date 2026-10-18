/* speed.exe 0045d600 FUN_0045d600; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0045d600(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  
  param_1[2] = param_3;
  param_1[3] = param_4;
  uVar2 = (param_2 >> 6) + (param_2 >> 0xc) + param_2 & 0x3f;
  param_1[1] = param_2;
  *param_1 = (&DAT_0090dd48)[uVar2];
  cVar1 = (&DAT_0090dd00)[uVar2];
  (&DAT_0090dd48)[uVar2] = param_1;
  (&DAT_0090dd00)[uVar2] = cVar1 + '\x01';
  return;
}

