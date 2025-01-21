using DirectXTK;
using System.Diagnostics;
using System.Numerics;

var audioEngine = new AudioEngine(AudioEngineFlags.Debug);
//var retryAudio = false;

var sound = new SoundEffect(audioEngine, @"C:\Program Files (x86)\Steam\steamapps\common\OMSI 2\Sounds\rain_outside.wav");
var soundInstance = sound.CreateInstance(SoundEffectInstanceFlags.Use3D);

var audioListener = new AudioListener();
var audioEmitter = new AudioEmitter();

var sw = new Stopwatch();
sw.Start();

//soundInstance.Play(false);
sound.Play();

// update loop
//while (true)
{
    // Move the object around in a circle.
    //var speed = (float)sw.Elapsed.TotalSeconds;
    //var position = new Vector3(MathF.Cos(speed) * 5f, 0, MathF.Sin(speed) * -5f);
    //Console.WriteLine(position);

    //audioEmitter.Update(position, Vector3.UnitY, speed);
    //soundInstance.Apply3D(audioListener, audioEmitter, true);

    Thread.Sleep(10000);//TimeSpan.FromSeconds(1 / 60f));

    //soundInstance.Play(false);
    sound.Play();

    //    Console.WriteLine($"Frame {audioEngine.IsCriticalError()} {audioEngine.IsAudioDevicePresent()}");

    //    if (retryAudio)
    //    {
    //        retryAudio = false;

    //        try
    //        {
    //            audioEngine.Reset();

    //            // ToDo: restart any looped sounds
    //        }
    //        catch (Exception ex)
    //        {
    //            Console.WriteLine($"A crtitical error occured: {ex.Message}.");
    //        }
    //    }

    //    try
    //    {
    //        audioEngine.Update();
    //    }
    //    catch
    //    {
    //        if (audioEngine.IsCriticalError())
    //            retryAudio = true;
    //    }
}

Console.ReadLine();

soundInstance.Dispose();
sound.Dispose();
//soundInstance.Dispose();

audioEngine.Suspend();
audioEngine.Dispose();

GC.Collect(GC.MaxGeneration, GCCollectionMode.Aggressive, true);

Console.ReadLine();