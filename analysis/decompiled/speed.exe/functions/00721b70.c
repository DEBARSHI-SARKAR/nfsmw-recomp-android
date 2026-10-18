/* speed.exe 00721b70 FUN_00721b70; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00721b70(int param_1,float *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = *(short *)(param_1 + 0x10);
  sVar2 = *(short *)(param_1 + 4);
  sVar3 = *(short *)(param_1 + 0x18);
  *param_2 = (float)((int)*(short *)(param_1 + 8) << 0xd) * _DAT_00890980;
  param_2[1] = (float)((int)sVar1 << 0xd) * _DAT_00890980;
  param_2[2] = (float)((sVar2 * 0x100 + (int)sVar3) * 0x100) * _DAT_00890980;
  sVar1 = *(short *)(param_1 + 0x12);
  sVar2 = *(short *)(param_1 + 0x1a);
  sVar3 = *(short *)(param_1 + 4);
  param_2[4] = (float)((int)*(short *)(param_1 + 10) << 0xd) * _DAT_00890980;
  param_2[5] = (float)((int)sVar1 << 0xd) * _DAT_00890980;
  param_2[6] = (float)((sVar3 * 0x100 + (int)sVar2) * 0x100) * _DAT_00890980;
  sVar1 = *(short *)(param_1 + 0x14);
  sVar2 = *(short *)(param_1 + 0x1c);
  sVar3 = *(short *)(param_1 + 4);
  param_2[8] = (float)((int)*(short *)(param_1 + 0xc) << 0xd) * _DAT_00890980;
  param_2[9] = (float)((int)sVar1 << 0xd) * _DAT_00890980;
  param_2[10] = (float)((sVar3 * 0x100 + (int)sVar2) * 0x100) * _DAT_00890980;
  sVar1 = *(short *)(param_1 + 0x16);
  sVar2 = *(short *)(param_1 + 0x1e);
  sVar3 = *(short *)(param_1 + 4);
  param_2[0xc] = (float)((int)*(short *)(param_1 + 0xe) << 0xd) * _DAT_00890980;
  param_2[0xd] = (float)((int)sVar1 << 0xd) * _DAT_00890980;
  param_2[0xe] = (float)((sVar3 * 0x100 + (int)sVar2) * 0x100) * _DAT_00890980;
  return;
}

