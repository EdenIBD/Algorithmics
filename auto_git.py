import os
import subprocess

# listă foldere de adăugat (copiază lista ta aici)
folders = [
    "pbinfo3614",
    "pbinfo4182",
    "pbinfo4383_v2",
    "pbinfo4385",
    "pbinfo4578",
    "pbinfo4695",
    "pbinfo4705",
    "pbinfo486_v2",
    "pbinfo487",
    "pbinfo488_v2",
    "pbinfo489",
    "pbinfo491",
    "pbinfo498",
    "pbinfo509",
    "pbinfo54",
    "pbinfo546",
    "pbinfo547",
    "pbinfo63",
    "pbinfo67",
    "pbinfo74",
    "pbinfo76",
    "pbinfo772",
    "pbinfo773",
    "pbinfo780",
    "pbinfo783",
    "pbinfo821",
    "pbinfo894",
    "pbinfo905",
    "pbinfo908",
    "pbinfo909",
    "pbinfo910",
    "pbinfo911",
    "pbinfo911_v2",
    "pbinfo986",
    "pbinfo988",
    "vector"
]

for folder in folders:
    if os.path.exists(folder):
        print(f"\n=== Procesare: {folder} ===")
        subprocess.run(["git", "add", folder])
        subprocess.run(["git", "commit", "-m", f"Added {folder}"])
        subprocess.run(["git", "push"])
    else:
        print(f"[SKIP] Folderul {folder} nu există în directorul curent")
