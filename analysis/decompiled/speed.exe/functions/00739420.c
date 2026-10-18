/* speed.exe 00739420 FUN_00739420; analysis pseudocode, not buildable source.
 * calls 00444fe0 FUN_00444fe0
 * calls 006bd920 FUN_006bd920
 */

void __thiscall FUN_00739420(int param_1,int param_2)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((1 < *(int *)(param_1 + 0x28)) && (*(int *)(param_1 + 0x44) != 0)) {
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0xc);
    local_2c = *(undefined4 *)(param_1 + 0x54);
    local_28 = *(undefined4 *)(param_1 + 0x58);
    local_30 = *(undefined4 *)(param_1 + 0x50);
    local_24 = *(undefined4 *)(param_1 + 0x5c);
    FUN_00444fe0(param_1 + 0x170,*(undefined4 *)(param_1 + 0x34));
    FUN_006bd920(&local_20,*(undefined4 *)(param_1 + 0x34),&local_30);
    *(float *)(param_1 + 0x1a0) = *(float *)(param_1 + 0x1a0) - local_20;
    *(float *)(param_1 + 0x1a4) = *(float *)(param_1 + 0x1a4) - local_1c;
    *(float *)(param_1 + 0x1a8) = *(float *)(param_1 + 0x1a8) - local_18;
    if (1 < *(int *)(param_1 + 0x28)) {
      *(undefined4 *)(param_1 + 0x28) = 3;
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
  }
  return;
}

