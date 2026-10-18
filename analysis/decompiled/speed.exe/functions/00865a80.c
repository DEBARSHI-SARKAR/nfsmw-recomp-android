/* speed.exe 00865a80 FUN_00865a80; analysis pseudocode, not buildable source.
 * calls EXTERNAL:000000ef waveInGetNumDevs
 * calls EXTERNAL:000000f0 waveInGetDevCapsA
 */

void FUN_00865a80(int param_1)

{
  UINT UVar1;
  int iVar2;
  LPWAVEINCAPSA pwic;
  UINT_PTR uDeviceID;
  
  UVar1 = waveInGetNumDevs();
  uDeviceID = 0;
  iVar2 = 0;
  if ((int)UVar1 < 1) {
    *(undefined4 *)(param_1 + 0x1358) = 0;
    return;
  }
  pwic = (LPWAVEINCAPSA)(param_1 + 0x11d8);
  do {
    if (7 < iVar2) {
      *(int *)(param_1 + 0x1358) = iVar2;
      return;
    }
    waveInGetDevCapsA(uDeviceID,pwic,0x30);
    if ((pwic->dwFormats & 4) != 0) {
      iVar2 = iVar2 + 1;
      pwic = pwic + 1;
    }
    uDeviceID = uDeviceID + 1;
  } while ((int)uDeviceID < (int)UVar1);
  *(int *)(param_1 + 0x1358) = iVar2;
  return;
}

