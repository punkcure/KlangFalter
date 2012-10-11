// ==================================================================================
// Copyright (c) 2012 HiFi-LoFi
//
// This is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// ==================================================================================

#ifndef _WAVEFORMCOMPONENT_H
#define _WAVEFORMCOMPONENT_H


#include "../JuceLibraryCode/JuceHeader.h"

#include "../Envelope.h"
#include "../IRAgent.h"

#include <vector>


class WaveformComponent : public juce::Component
{
public:
  explicit WaveformComponent();
  virtual ~WaveformComponent();
  
  virtual void paint(juce::Graphics& g);
  virtual void resized();
  
  void init(IRAgent* irAgent, double sampleRate, size_t samplesPerPx);
  void clear();
  
  virtual void mouseDoubleClick(const juce::MouseEvent& mouseEvent);
  virtual void mouseDown(const juce::MouseEvent& mouseEvent);
  virtual void mouseDrag(const juce::MouseEvent& mouseEvent);
  virtual void mouseMove(const juce::MouseEvent& mouseEvent);
  virtual void mouseExit(const juce::MouseEvent& mouseEvent);
  
  void envelopeChanged();
  
protected:
  int calcEnvelopePosX(double x) const;
  int calcEnvelopePosY(double y) const;
  double calcEnvelopeValueX(int posX) const;
  double calcEnvelopeValueY(int posY) const;
  size_t getEnvelopeNode(int posX, int posY) const;
  
  void updateArea();
  
private:
  IRAgent* _irAgent;
  std::vector<float> _maxima;
  
  double _sampleRate;
  size_t _samplesPerPx;
  float _minDecibels;
  float _pxPerDecibel;
  Rectangle<int> _area;
  
  Envelope _envelope;
  double _dragDistance;
  size_t _indexHighlighted;
  size_t _indexDragged;
  double _dragStartX;
  double _dragStartY;
  
  WaveformComponent(const WaveformComponent&);
  WaveformComponent& operator=(const WaveformComponent&);
};


#endif // Header guard