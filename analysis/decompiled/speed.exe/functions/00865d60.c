/* speed.exe 00865d60 FUN_00865d60; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000e4 waveOutSetVolume
 * calls EXTERNAL:000000e3 waveOutGetPosition
 * calls 007d6cb0 __security_check_cookie
 * calls 00866f80 FUN_00866f80
 * calls EXTERNAL:000000e2 waveOutWrite
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00865d60(void)

{
  uint uVar1;
  MMRESULT MVar2;
  int iVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  mmtime_tag local_10;
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  if ((*(HWAVEOUT *)(unaff_EBX + 0x1364) != (HWAVEOUT)0x0) && (*(int *)(unaff_EBX + 0x26e4) == 1)) {
    if ((*(int *)(unaff_EBX + 0x1370) != *(int *)(unaff_EBX + 0x1374)) &&
       (uVar1 = (*(int *)(unaff_EBX + 0x1374) * 0xffff) / 100,
       MVar2 = waveOutSetVolume(*(HWAVEOUT *)(unaff_EBX + 0x1364),uVar1 * 0x10000 | uVar1),
       MVar2 == 0)) {
      *(undefined4 *)(unaff_EBX + 0x1370) = *(undefined4 *)(unaff_EBX + 0x1374);
    }
    local_10.wType = 4;
    MVar2 = waveOutGetPosition(*(HWAVEOUT *)(unaff_EBX + 0x1364),&local_10,0xc);
    if ((MVar2 != 0) ||
       (local_10.u.ms == *(DWORD *)(unaff_EBX + 0x26e0) ||
        (int)(local_10.u.ms - *(DWORD *)(unaff_EBX + 0x26e0)) < 0)) {
      puVar4 = (undefined4 *)(unaff_EBX + 10000);
      iVar3 = FUN_00866f80(*(undefined4 *)(unaff_EBX + 0x33e0),puVar4);
      if (iVar3 == 0x8c0) {
        puVar5 = (undefined4 *)(*(int *)(unaff_EBX + 0x2538) * 0x8e0 + 0x1398 + unaff_EBX);
        for (iVar3 = 0x230; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        MVar2 = waveOutWrite(*(HWAVEOUT *)(unaff_EBX + 0x1364),
                             (LPWAVEHDR)(*(int *)(unaff_EBX + 0x2538) * 0x8e0 + 0x1378 + unaff_EBX),
                             0x20);
        if (MVar2 == 0) {
          *(int *)(unaff_EBX + 0x26e0) = *(int *)(unaff_EBX + 0x26e0) + 0x8c0;
          *(uint *)(unaff_EBX + 0x2538) = (uint)(*(int *)(unaff_EBX + 0x2538) == 0);
          return;
        }
      }
      else {
        for (iVar3 = 0x8c; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      }
    }
  }
  return;
}

