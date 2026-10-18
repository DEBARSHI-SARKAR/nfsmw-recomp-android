/* speed.exe 006e1de0 FUN_006e1de0; analysis pseudocode, not buildable source.
 */

undefined4 * __thiscall FUN_006e1de0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar2 = rdtsc();
  uVar3 = (uint)uVar2 & 3;
  iVar1 = *(int *)(&DAT_009019c4 + uVar3 * 4);
  *param_1 = *(undefined4 *)(&DAT_009019d4 + uVar3 * 4);
  param_1[1] = 0x18005041;
  param_1[2] = 0x4c285ac2;
  param_1[3] = 0x18005041;
  param_1[4] = *param_2;
  param_1[5] = *param_3;
  uVar3 = iVar1 * iVar1 ^ 0x18005041;
  param_1[1] = uVar3;
  uVar3 = uVar3 * iVar1 ^ 0x4c285ac2;
  param_1[2] = uVar3;
  uVar3 = uVar3 * iVar1 ^ 0x18005041;
  param_1[3] = uVar3;
  uVar3 = param_1[4] ^ uVar3 * iVar1;
  param_1[4] = uVar3;
  uVar3 = param_1[5] ^ uVar3 * iVar1;
  param_1[5] = uVar3;
  uVar3 = param_1[6] ^ uVar3 * iVar1;
  param_1[6] = uVar3;
  param_1[7] = param_1[7] ^ uVar3 * iVar1;
  return param_1;
}

