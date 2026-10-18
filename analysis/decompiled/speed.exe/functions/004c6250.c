/* speed.exe 004c6250 FUN_004c6250; analysis pseudocode, not buildable source.
 * calls 004bf2e0 FUN_004bf2e0
 */

void __fastcall FUN_004c6250(int *param_1)

{
  uint *puVar1;
  undefined4 unaff_retaddr;
  
  if (param_1[10] == 0) {
    *(undefined4 *)(param_1[3] + 0xc) = 0;
    *(undefined4 *)(param_1[3] + 4) = 0xffffffff;
    *(undefined4 *)(param_1[3] + 8) = 0;
    *(undefined4 *)param_1[3] = 0xffffffff;
    *(uint *)(param_1[3] + 0x3c) = *(uint *)(param_1[3] + 0x3c) & 0xfffffffe;
    return;
  }
  puVar1 = (uint *)(param_1[3] + 0x3c);
  *puVar1 = *puVar1 | 1;
  *(int *)(param_1[3] + 0x2c) = param_1[0x11];
  (**(code **)(*param_1 + 0x34))(0);
  FUN_004bf2e0(param_1[0x11],unaff_retaddr);
  return;
}

